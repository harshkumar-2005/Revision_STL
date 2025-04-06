#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, find, etc.
using namespace std;

int main() {
    // 1. Basic Declaration and Initialization
    vector<int> v1; // empty vector
    vector<int> v2(5, 10); // vector of size 5, all elements initialized to 10

    cout << "v2 initialized with 5 tens: ";
    for (int x : v2) cout << x << " ";
    cout << endl;

    // 2. Adding Elements
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    cout << "v1 after push_back: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    // 3. Accessing Elements
    cout << "v1[0] = " << v1[0] << ", at(1) = " << v1.at(1) << endl;

    // 4. Size, Capacity, Front, Back
    cout << "Size: " << v1.size() << ", Capacity: " << v1.capacity() << endl;
    cout << "Front: " << v1.front() << ", Back: " << v1.back() << endl;

    // 5. Removing Elements
    v1.pop_back(); // removes last element
    cout << "After pop_back: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    // 6. Inserting and Erasing
    v1.insert(v1.begin(), 100); // insert 100 at beginning
    v1.erase(v1.begin() + 1);   // remove second element
    cout << "After insert and erase: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    // 7. Clear and Empty
    vector<int> v3 = {1, 2, 3, 4, 5};
    v3.clear(); // removes all elements
    cout << "v3 is empty? " << (v3.empty() ? "Yes" : "No") << endl;

    // 8. Vector Traversal with Iterators
    vector<int> v4 = {5, 4, 3, 2, 1};
    cout << "v4 with iterators: ";
    for (auto it = v4.begin(); it != v4.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 9. Sorting and Reversing
    sort(v4.begin(), v4.end()); // ascending
    cout << "Sorted v4: ";
    for (int x : v4) cout << x << " ";
    cout << endl;

    reverse(v4.begin(), v4.end()); // descending
    cout << "Reversed v4: ";
    for (int x : v4) cout << x << " ";
    cout << endl;

    // 10. Searching
    if (find(v4.begin(), v4.end(), 3) != v4.end()) {
        cout << "3 found in v4\n";
    } else {
        cout << "3 not found in v4\n";
    }

    // 11. Vector of Pairs
    vector<pair<int, string>> studentMarks;
    studentMarks.push_back({1, "Alice"});
    studentMarks.push_back({2, "Bob"});

    cout << "Vector of Pairs:\n";
    for (auto &p : studentMarks) {
        cout << p.first << ": " << p.second << endl;
    }

    // 12. 2D Vector (Matrix)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D Vector (Matrix):\n";
    for (auto &row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // 13. Custom Sorting with Comparator
    vector<pair<int, int>> vec = {{1, 5}, {2, 2}, {3, 3}};
    sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second; // sort by second
    });

    cout << "Sorted vector of pairs by second:\n";
    for (auto p : vec) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << endl;

    // 14. Resize, Assign, and Swap
    vector<int> a = {1, 2, 3};
    vector<int> b;
    b.assign(3, 7); // b = {7, 7, 7}
    a.swap(b); // a and b swap contents
    cout << "After swap:\na = ";
    for (int x : a) cout << x << " ";
    cout << "\nb = ";
    for (int x : b) cout << x << " ";
    cout << endl;

    return 0;
}
