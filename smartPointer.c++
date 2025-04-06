#include <iostream>
#include <memory>   // For smart pointers
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {
        cout << "MyClass constructor called for value " << value << endl;
    }
    ~MyClass() {
        cout << "MyClass destructor called for value " << value << endl;
    }
    void show() const {
        cout << "Value: " << value << endl;
    }
private:
    int value;
};

void uniquePtrExample() {
    cout << "\n-- unique_ptr Example --\n";
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>(10);
    ptr1->show();

    // Ownership can't be shared; must move to transfer
    unique_ptr<MyClass> ptr2 = move(ptr1);
    if (!ptr1) cout << "ptr1 is now null after move.\n";
    ptr2->show();

    // unique_ptr auto deletes the object when out of scope
}

void sharedPtrExample() {
    cout << "\n-- shared_ptr Example --\n";
    shared_ptr<MyClass> sp1 = make_shared<MyClass>(20);
    shared_ptr<MyClass> sp2 = sp1; // shared ownership
    cout << "sp1 use_count: " << sp1.use_count() << endl;
    cout << "sp2 use_count: " << sp2.use_count() << endl;

    sp1->show();
    sp2->show();

    sp1.reset(); // sp2 still holds ownership
    cout << "After resetting sp1, sp2 use_count: " << sp2.use_count() << endl;
    sp2->show();

    // Object is deleted only when all shared_ptrs are destroyed or reset
}

void weakPtrExample() {
    cout << "\n-- weak_ptr Example --\n";
    shared_ptr<MyClass> sp = make_shared<MyClass>(30);
    weak_ptr<MyClass> wp = sp; // doesn't contribute to reference count

    cout << "shared_ptr use_count: " << sp.use_count() << endl;

    if (auto temp = wp.lock()) {
        cout << "weak_ptr successfully locked:\n";
        temp->show();
        cout << "use_count after lock: " << sp.use_count() << endl;
    } else {
        cout << "weak_ptr is expired.\n";
    }

    sp.reset(); // Now object is destroyed

    if (wp.expired()) {
        cout << "weak_ptr expired after shared_ptr reset.\n";
    }
}

void customDeleterExample() {
    cout << "\n-- shared_ptr with Custom Deleter --\n";
    shared_ptr<MyClass> sp(new MyClass(40), [](MyClass* p) {
        cout << "Custom deleter called!\n";
        delete p;
    });
    sp->show();
}

void useInFunction(unique_ptr<MyClass> ptr) {
    cout << "Inside function, showing value:\n";
    ptr->show();
    // No need to delete — unique_ptr handles it
}

int main() {
    cout << "=== Smart Pointer Full Demo ===\n";

    uniquePtrExample();
    sharedPtrExample();
    weakPtrExample();
    customDeleterExample();

    cout << "\n-- Passing unique_ptr to Function --\n";
    unique_ptr<MyClass> up = make_unique<MyClass>(50);
    useInFunction(move(up));
    if (!up) cout << "unique_ptr is null in main after move.\n";

    cout << "\n=== End of Program ===\n";
    return 0;
}
