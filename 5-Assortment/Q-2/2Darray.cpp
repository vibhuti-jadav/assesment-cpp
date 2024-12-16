#include<iostream>

using namespace std;

int main(){

    int row,cols;

    cout<<"Enter the array's row size:";
    cin>>row;

    cout<<"Enter the array's column size:";
    cin>>cols;    

    int arr[row][cols];

    cout<<"Enter array's elements: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }

    int large=arr[0][0];

    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>large){
                large=arr[i][j];
            }

        }
    }

cout<<"The largest element is:"<<large<<endl;
    return 0;
}