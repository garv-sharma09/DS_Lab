#include <iostream>
using namespace std;
int a[100];
int n, i;

void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Array created successfully!\n";
}

void display() {
    if (n == 0) {
        cout << "Empty array\n";
        return;
    }
    cout << "Array elements: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void insert() {
    int pos, val;
    cout << "Enter the position: ";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!\n";
        return;
    }
    cout << "Enter the value: ";
    cin >> val;
    
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = val;
    n = n + 1;
    cout << "After insertion: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void deleteelement() {
    if (n == 0) {
        cout << "Array is empty!\n";
        return;
    }
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position!\n";
        return;
    }
    for (i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n = n - 1;
    cout << "After deletion: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void linearsearch() {
    if (n == 0) {
        cout << "Array is empty!\n";
        return;
    }
    int count = 0, num;
    cout << "Enter element to search: ";
    cin >> num;
    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            cout << "Element found at position " << i + 1 << "\n";
            count = 1;
        }
    }
    if (count != 1) {
        cout << "Element not found!\n";
    }
}

int main() {
    int b;
    bool running = true;

    while (running) {
        cout << "\nMENU——\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> b;

        switch (b) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                deleteelement();
                break;
            case 5:
                linearsearch();
                break;
            case 6:
                cout << "Exiting the program\n";
                running = false;
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}