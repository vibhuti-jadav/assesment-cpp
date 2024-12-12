

#include <iostream>
using namespace std;

int main() {

    for (int i = 5; i >=1; i--) {            // Outer loop for rows
        // Print spaces
        for (int j = 0; j <5-i; j++) {
            cout << "  ";                       // Two spaces for alignment
        }

        // Print the 1 0 pattern
        for (int j = 1; j <=i; j++) {
           if((i+j)%2==0){
            cout<<"1 ";
           }  
           else{
            cout<<"0 ";
           }           // Print 1 for even indices, 0 for odd
        }
        

        cout << endl;                           // Move to the next line
    }

    return 0;
}
