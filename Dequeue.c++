// std::deque (Double Ended Queue) in C++ STL
//  What Is std::deque?
// A Double-Ended Queue, pronounced "deck".

// Supports fast insertion/deletion at both front and back.

// Allows random access like a vector.

// Internally implemented as a dynamic array of fixed-size arrays for efficient front insertion.

#include <iostream>
#include <deque>
#include <algorithm> // for sort, reverse
using namespace std;

void printDeque(const deque<int>& dq, const string& name = "") {
    if (!name.empty()) cout << name << ": ";
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== Complete std::deque Demo ===\n\n";

    // 1. Declaration and Initialization
    deque<int> dq1 = {10, 20, 30};
    deque<int> dq2(5, 100); // 5 elements of value 100

    printDeque(dq1, "Initial dq1");
    printDeque(dq2, "Initial dq2");

    // 2. push_back, push_front
    dq1.push_back(40);
    dq1.push_front(5);
    printDeque(dq1, "After push_back & push_front");

    // 3. pop_back, pop_front
    dq1.pop_back();
    dq1.pop_front();
    printDeque(dq1, "After pop_back & pop_front");

    // 4. insert (single & multiple)
    auto it = dq1.begin() + 1;
    dq1.insert(it, 99); // single
    dq1.insert(it, 2, 88); // multiple
    printDeque(dq1, "After insert");

    // 5. emplace_front, emplace_back, emplace
    dq1.emplace_front(1);
    dq1.emplace_back(50);
    dq1.emplace(dq1.begin() + 2, 75);
    printDeque(dq1, "After emplace functions");

    // 6. erase (single & range)
    dq1.erase(dq1.begin() + 1); // erase 2nd element
    dq1.erase(dq1.begin() + 2, dq1.begin() + 4); // erase range
    printDeque(dq1, "After erase");

    // 7. assign
    deque<int> dq3;
    dq3.assign({1, 2, 3, 4});
    printDeque(dq3, "After assign");

    // 8. at, operator[], front, back
    cout << "Element at index 2 (dq3.at): " << dq3.at(2) << endl;
    cout << "Element at index 1 (dq3[]): " << dq3[1] << endl;
    cout << "Front: " << dq3.front() << ", Back: " << dq3.back() << endl;

    // 9. resize
    dq3.resize(6, 0); // increase size and fill with 0
    dq3.resize(3); // reduce size
    printDeque(dq3, "After resize");

    // 10. clear, empty
    dq3.clear();
    cout << "dq3 is " << (dq3.empty() ? "empty" : "not empty") << " after clear()\n";

    // 11. sort (only with random access iterators)
    deque<int> dq4 = {9, 5, 3, 7, 1};
    sort(dq4.begin(), dq4.end());
    printDeque(dq4, "After sort");

    // 12. reverse
    reverse(dq4.begin(), dq4.end());
    printDeque(dq4, "After reverse");

    // 13. swap
    deque<int> dq5 = {111, 222, 333};
    dq4.swap(dq5);
    printDeque(dq4, "dq4 after swap with dq5");
    printDeque(dq5, "dq5 after swap");

    // 14. max_size & size
    cout << "dq5 size: " << dq5.size() << ", max_size: " << dq5.max_size() << endl;

    return 0;
}
