#include <iostream>
using namespace std;

int main() {
    int arr[10], search_ele, n, i, flag = -1;
    char ch;

    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements in the array: " << endl;

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nEnter 's' for searching element in array: ";
    cout << "\nEnter 't' for traversing elements of array: " << endl;
    cin >> ch;

    switch (ch) {
        case 's':
            cout << "\nEnter element to be searched: ";
            cin >> search_ele;
            for (i = 0; i < n; i++) {
                if (arr[i] == search_ele) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                cout << "Element " << search_ele << " found at index " << i << endl;
            } else {
                cout << "Element not found in the array!" << endl;
            }
            break;

        case 't':
            cout << "\nTraversal of the array:" << endl;
            for (i = 0; i < n; i++) {
                cout << "arr[" << i << "] = " << arr[i] << endl;
            }
            break;

        default:
            cout << "Invalid option!" << endl;
            break;
    }

    return 0;
}
