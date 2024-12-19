#include <iostream>
using namespace std;


int cube(int n) {
    return n * n * n;
}

int main() {
    int rows, cols;


    cout << "Enter array's size:";
    cin >> rows >> cols;

    int arr[rows][cols];

    int *ptr = &arr[0][0];

    cout << "Enter array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> *(ptr + i * cols + j); 
        }
    }

    cout << "\nCubes of all elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
         
            cout << cube(*(ptr + i * cols + j)) << " ";
        }
        cout << endl;
    }

    return 0;
}
