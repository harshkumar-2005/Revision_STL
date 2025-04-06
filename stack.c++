// What is std::stack?
// A container adaptor in C++ STL.

// Follows LIFO: Last In, First Out.

// By default, it's built on top of a deque, but you can also use vector or list.

#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> st, const string& name = "") {
    if (!name.empty()) cout << name << ": ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    cout << "=== std::stack Demo ===\n\n";

    // 1. Declaration
    stack<int> s;

    // 2. push(), top(), size()
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << endl;  // 30
    cout << "Stack size: " << s.size() << endl;

    // 3. pop()
    s.pop(); // removes 30
    cout << "Top after pop: " << s.top() << endl; // 20

    // 4. emplace()
    s.emplace(50); // better than push, constructs in-place
    cout << "Top after emplace: " << s.top() << endl;

    // 5. empty()
    cout << "Stack is " << (s.empty() ? "empty" : "not empty") << endl;

    // 6. print full stack
    printStack(s, "Current stack");

    // 7. Swap with another stack
    stack<int> s2;
    s2.push(100);
    s2.push(200);
    s2.push(300);
    s.swap(s2);

    printStack(s, "Stack after swap");
    printStack(s2, "Other stack");

    return 0;
}


// Internally uses another container like:

// deque (default) ✅

// vector

// list

// You cannot iterate a stack directly because it hides its internal container (no .begin() or .end()).
