
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

 
    cout << "Enter the array's row & column size: ";
    cin >> rows >> cols;

    
    int arr[rows][cols];


    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }


    int transpose[cols][rows]; 


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }


    cout << "The transpose matrix of the array:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
