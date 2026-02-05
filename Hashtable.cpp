#include <iostream>
#include <list>
using namespace std;

class HashTable {
    int size;
    list<int>* table;

public:
    // Constructor
    HashTable(int s) {
        size = s;
        table = new list<int>[size];
    }

    // Hash function
    int hashFunction(int key) {
        return key % size;
    }

    // Insert operation
    void insert(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }

    // Search operation
    bool search(int key) {
        int index = hashFunction(key);
        for (int x : table[index]) {
            if (x == key)
                return true;
        }
        return false;
    }

    // Delete operation
    void deleteKey(int key) {
        int index = hashFunction(key);
        table[index].remove(key);
    }

    // Display hash table
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << " : ";
            for (int x : table[i]) {
                cout << x << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
};

int main() {
    HashTable ht(7);

    // Insert values
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    ht.insert(40);
    ht.insert(50);

    cout << "Hash Table after insertion:\n";
    ht.display();

    // Search for 30
    if (ht.search(30))
        cout << "\n30 found in hash table\n";
    else
        cout << "\n30 not found\n";

    // Delete 30
    ht.deleteKey(30);

    cout << "\nHash Table after deleting 30:\n";
    ht.display();

    return 0;
}


