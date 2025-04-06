// std::forward_list — a singly linked list from the C++ STL.

// What Is forward_list?
// Introduced in C++11.

// It is a singly linked list — meaning it supports only forward traversal.

// It is more memory-efficient than list (no back pointers).

// Lacks .size() and .reverse_iterator unlike list.

// forward_list is a single-linked list.
// It is more memory-efficient than list (no back pointers).
// Lacks .size() and .reverse_iterator unlike list.

#include <iostream>
#include <forward_list>
#include <algorithm> // for sort, unique, merge
using namespace std;

void printList(forward_list<int>& fl) {
    for (int val : fl) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== Complete forward_list Demo ===\n\n";

    // 1. Declaration and Initialization
    forward_list<int> fl1 = {10, 20, 30};
    forward_list<int> fl2; // empty list

    cout << "Initial forward_list (fl1): ";
    printList(fl1);

    // 2. push_front and emplace_front
    fl1.push_front(5); // add at front
    fl1.emplace_front(1); // more efficient than push_front
    cout << "After push_front and emplace_front: ";
    printList(fl1);

    // 3. pop_front
    fl1.pop_front();
    cout << "After pop_front: ";
    printList(fl1);

    // 4. insert_after
    auto it = fl1.begin(); // points to first element
    fl1.insert_after(it, 15); // inserts after first element
    cout << "After insert_after first element: ";
    printList(fl1);

    // 5. emplace_after
    fl1.emplace_after(it, 12); // inserts 12 after first element
    cout << "After emplace_after: ";
    printList(fl1);

    // 6. erase_after
    fl1.erase_after(it); // erases 12
    cout << "After erase_after: ";
    printList(fl1);

    // 7. assign
    forward_list<int> fl3;
    fl3.assign({100, 200, 300});
    cout << "Assigned forward_list (fl3): ";
    printList(fl3);

    // 8. sort
    forward_list<int> fl4 = {9, 5, 7, 3, 1, 3};
    fl4.sort();
    cout << "Sorted fl4: ";
    printList(fl4);

    // 9. remove
    fl4.remove(3); // removes all 3s
    cout << "After remove(3): ";
    printList(fl4);

    // 10. remove_if
    fl4.remove_if([](int x) { return x < 6; });
    cout << "After remove_if(x < 6): ";
    printList(fl4);

    // 11. unique
    forward_list<int> fl5 = {1, 1, 2, 2, 2, 3, 3, 4};
    fl5.unique();
    cout << "After unique() on fl5: ";
    printList(fl5);

    // 12. merge
    forward_list<int> fl6 = {1, 3, 5};
    forward_list<int> fl7 = {2, 4, 6};
    fl6.merge(fl7); // merge assumes both are sorted
    cout << "After merging fl6 and fl7 (into fl6): ";
    printList(fl6);

    // 13. reverse
    fl6.reverse();
    cout << "After reverse(): ";
    printList(fl6);

    // 14. clear
    fl6.clear();
    cout << "After clear(), is fl6 empty? " << (fl6.empty() ? "Yes" : "No") << endl;

    // 15. front
    cout << "Front of fl5: " << fl5.front() << endl;

    // 16. before_begin
    auto head = fl5.before_begin(); // for inserting at front in specific scenarios
    fl5.insert_after(head, 0); // now list starts with 0
    cout << "After insert_after before_begin(): ";
    printList(fl5);

    // 17. Resize (not directly supported, so we emulate)
    forward_list<int> fl8 = {1, 2, 3};
    auto it2 = fl8.before_begin();
    for (int i = 0; i < 2; i++) ++it2; // move iterator to 2nd element
    fl8.insert_after(it2, {4, 5});
    cout << "fl8 after emulated resize (append elements): ";
    printList(fl8);

    return 0;
}

