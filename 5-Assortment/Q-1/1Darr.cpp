#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the array's size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Negative elements from the array: ";
    bool foundNegative = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (foundNegative) {
                cout << ", ";
            }
            cout << arr[i];
            foundNegative = true;
        }
    }
    
    if (!foundNegative) {
        cout << "None";
    }
    
    cout << endl;

    return 0;
}
