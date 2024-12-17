
#include <iostream>
using namespace std;

int main() {
    int row, col;

   
    cout << "Enter the array's row size: ";
    cin >> row;
    cout << "Enter the array's column size: ";
    cin >> col;

 
    int array[row][col];

 
    cout << "Enter array's elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }


    int rowNum;
    cout << "Enter row number: ";
    cin >> rowNum;

    int rowSum = 0;
    cout << "Elements of row " << rowNum << ": ";
    for (int j = 0; j < col; j++) {
        cout << array[rowNum][j] << " ";
        rowSum += array[rowNum][j];
    }
    cout << "\nThe sum of row " << rowNum << ": " << rowSum << endl;

   
    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    
    int colSum = 0;
    cout << "Elements of column " << colNum << ": ";
    for (int i = 0; i < row; i++) {
        cout << array[i][colNum] << " ";
        colSum += array[i][colNum];
    }
    cout << "\nThe sum of column " << colNum << ": " << colSum << endl;

    return 0;
}
