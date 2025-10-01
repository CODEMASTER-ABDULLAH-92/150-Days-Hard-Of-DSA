#include <iostream>
#include <list>
#include <algorithm> // for sort, find
using namespace std;

class MyList {
private:
    list<int> lst;      // STL list container
    int capacity;       // optional for "IsFull"

public:
    // Constructor
    MyList(int cap = 100) {
        capacity = cap;
    }

    // Insert element at the end
    void Insert(int value) {
        if (IsFull()) {
            cout << "List is Full! Cannot insert.\n";
            return;
        }
        lst.push_back(value);
        cout << value << " inserted.\n";
    }

    // Update element at given position (0-based index)
    void Update(int pos, int newValue) {
        if (pos < 0 || pos >= lst.size()) {
            cout << "Invalid position!\n";
            return;
        }
        auto it = lst.begin();
        advance(it, pos);
        *it = newValue;
        cout << "Updated position " << pos << " with " << newValue << ".\n";
    }

    // Remove element by value
    void Remove(int value) {
        auto it = find(lst.begin(), lst.end(), value);
        if (it != lst.end()) {
            lst.erase(it);
            cout << value << " removed.\n";
        } else {
            cout << "Value not found!\n";
        }
    }

    // Find element (returns index or -1)
    int Find(int value) {
        auto it = find(lst.begin(), lst.end(), value);
        if (it != lst.end()) {
            return distance(lst.begin(), it);
        }
        return -1;
    }

    // Check if empty
    bool IsEmpty() {
        return lst.empty();
    }

    // Check if full (based on capacity)
    bool IsFull() {
        return lst.size() >= capacity;
    }

    // Print all elements
    void Print() {
        if (IsEmpty()) {
            cout << "List is empty.\n";
            return;
        }
        cout << "List elements: ";
        for (int val : lst) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Sort the list
    void SortList() {
        lst.sort();
        cout << "List sorted.\n";
    }
};

// ----------------- MAIN FUNCTION -----------------
int main() {
    MyList myList(10); // capacity = 10

    myList.Insert(30);
    myList.Insert(10);
    myList.Insert(50);
    myList.Insert(20);

    myList.Print();

    myList.Update(1, 99);   // update index 1 with 99
    myList.Print();

    myList.Remove(50);      // remove element 50
    myList.Print();

    cout << "Find 99 at index: " << myList.Find(99) << endl;
    cout << "Find 77 at index: " << myList.Find(77) << endl;

    myList.SortList();
    myList.Print();

    cout << "IsEmpty: " << (myList.IsEmpty() ? "Yes" : "No") << endl;
    cout << "IsFull: " << (myList.IsFull() ? "Yes" : "No") << endl;

    return 0;
}
