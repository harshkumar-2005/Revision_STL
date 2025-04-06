// What Is std::list?
// A doubly linked list in C++ STL.

// Allows fast insertion and deletion anywhere (unlike vector or deque).

// Supports bidirectional iterators (can go forward and backward).

// Uses more memory than vector or forward_list.

#include <iostream>
#include <list>
#include <algorithm> // for sort, reverse, merge, remove_if
using namespace std;

void printList(const list<int>& lst, string name = "") {
    if (!name.empty()) cout << name << ": ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== Complete list STL Demo ===\n\n";

    // 1. Declaration and Initialization
    list<int> l1 = {10, 20, 30};
    list<int> l2; // empty list

    printList(l1, "Initial l1");

    // 2. push_back, push_front
    l1.push_back(40);
    l1.push_front(5);
    printList(l1, "After push_front & push_back");

    // 3. pop_back, pop_front
    l1.pop_back();
    l1.pop_front();
    printList(l1, "After pop_front & pop_back");

    // 4. insert (single & multiple)
    auto it = l1.begin();
    advance(it, 1); // move iterator to second position
    l1.insert(it, 15);            // insert single
    l1.insert(it, 2, 100);        // insert 2 elements of value 100
    printList(l1, "After insertions");

    // 5. emplace (more efficient insert)
    l1.emplace(it, 77); // inserts before iterator position
    printList(l1, "After emplace");

    // 6. erase (single & range)
    l1.erase(it); // erase 2nd position (original it)
    printList(l1, "After erase");

    // 7. assign
    list<int> l3;
    l3.assign({1, 2, 3, 4, 5});
    printList(l3, "List l3 after assign");

    // 8. remove
    l3.remove(3); // removes all 3s
    printList(l3, "After remove(3)");

    // 9. remove_if
    l3.remove_if([](int x) { return x % 2 == 0; }); // remove even
    printList(l3, "After remove_if (even)");

    // 10. reverse
    list<int> l4 = {5, 4, 3, 2, 1};
    l4.reverse();
    printList(l4, "After reverse");

    // 11. sort
    l4.push_back(3);
    l4.sort();
    printList(l4, "After sort");

    // 12. unique
    list<int> l5 = {1, 1, 2, 2, 2, 3, 3, 4};
    l5.unique(); // removes consecutive duplicates
    printList(l5, "After unique");

    // 13. merge
    list<int> l6 = {1, 3, 5};
    list<int> l7 = {2, 4, 6};
    l6.merge(l7); // both must be sorted
    printList(l6, "After merge with l7");
    printList(l7, "l7 after merge (should be empty)");

    // 14. splice - moves elements between lists
    list<int> l8 = {100, 200, 300};
    list<int> l9 = {1, 2, 3, 4};
    auto it9 = next(l9.begin(), 2);
    l9.splice(it9, l8); // moves all of l8 before 3
    printList(l9, "After splice l8 into l9");
    printList(l8, "l8 after splice (should be empty)");

    // 15. resize
    list<int> l10 = {10, 20, 30};
    l10.resize(5);         // adds 2 default 0s
    printList(l10, "After resize to 5");
    l10.resize(3);         // trims to size 3
    printList(l10, "After resize to 3");

    // 16. clear, empty
    l10.clear();
    cout << "l10 is " << (l10.empty() ? "empty" : "not empty") << " after clear()\n";

    // 17. front, back
    list<int> l11 = {9, 8, 7};
    cout << "Front of l11: " << l11.front() << ", Back: " << l11.back() << endl;

    return 0;
}

