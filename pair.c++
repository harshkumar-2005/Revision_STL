#include <iostream>
#include <utility>      // for std::pair, std::make_pair
#include <vector>       // for std::vector
#include <algorithm>    // for std::sort
using namespace std;

int main() {
    // 1. Basic Initialization
    pair<int, string> p1;
    p1 = {1, "Apple"};
    cout << "p1: " << p1.first << ", " << p1.second << endl;

    // 2. Initialization with make_pair
    pair<int, string> p2 = make_pair(2, "Banana");
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    // 3. Direct Initialization
    pair<int, string> p3(3, "Cherry");
    cout << "p3: " << p3.first << ", " << p3.second << endl;

    // 4. Modifying pair elements
    p3.first = 4;
    p3.second = "Coconut";
    cout << "Modified p3: " << p3.first << ", " << p3.second << endl;

    // 5. Nested Pairs
    pair<int, pair<string, double>> nestedPair = {1, {"Book", 99.99}};
    cout << "Nested Pair: " << nestedPair.first << ", "
         << nestedPair.second.first << ", " << nestedPair.second.second << endl;

    // 6. Array of Pairs
    pair<int, int> pairArray[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << "Array of Pairs:\n";
    for (auto p : pairArray) {
        cout << p.first << " " << p.second << endl;
    }

    // 7. Vector of Pairs
    vector<pair<string, int>> vecPairs;
    vecPairs.push_back({"Math", 95});
    vecPairs.push_back(make_pair("Science", 90));
    vecPairs.push_back({"English", 85});
    cout << "Vector of Pairs:\n";
    for (auto &sub : vecPairs) {
        cout << sub.first << ": " << sub.second << endl;
    }

    // 8. Comparing Pairs (Lexicographical Comparison)
    pair<int, int> a = {2, 3};
    pair<int, int> b = {2, 5};
    if (a < b) cout << "Pair a is less than pair b\n";
    else cout << "Pair a is NOT less than pair b\n";

    // 9. Swapping Pairs
    cout << "Before swap: a = (" << a.first << "," << a.second << "), b = (" << b.first << "," << b.second << ")\n";
    swap(a, b);
    cout << "After swap: a = (" << a.first << "," << a.second << "), b = (" << b.first << "," << b.second << ")\n";

    // 10. Sorting Vector of Pairs
    vector<pair<int, int>> vp = {{5, 100}, {1, 200}, {3, 150}};
    sort(vp.begin(), vp.end()); // sorts by first, then by second if firsts are equal
    cout << "Sorted Vector of Pairs:\n";
    for (auto &p : vp) {
        cout << p.first << ", " << p.second << endl;
    }

    // 11. Custom Sorting using Lambda
    sort(vp.begin(), vp.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second; // sort by second in descending order
    });
    cout << "Custom Sorted by second descending:\n";
    for (auto &p : vp) {
        cout << p.first << ", " << p.second << endl;
    }

    return 0;
}
