#include <iostream>
using namespace std;

const int MAX_SIZE = 20; // Maximum allowed size of the array
int arr[MAX_SIZE];       // Array declaration
int size = 0;            // Current size of the array

void disp();            // Function to display the array
void search(int val);  // Function to search for a value in the array

int main() {
    int ch, val;

    cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid size. Please enter a value between 1 and " << MAX_SIZE << ".\n";
        return 1; // Exit with error code
    }

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n**** Main Menu ****\n";
        cout << "1. Display\n";
        cout << "2. Search\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                disp();
                break;
            case 2:
                cout << "Enter value to be searched: ";
                cin >> val;
                search(val);
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (ch != 3); // Continue until the user chooses to exit

    return 0;
}

void disp() {
    cout << "Given Array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Newline for better readability
}

void search(int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            cout << "Value is found at position " << i << ".\n";
            return; // Exit function after finding the value
        }
    }
    cout << "Value is not found.\n";
}
