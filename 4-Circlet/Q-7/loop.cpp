#include <iostream>
using namespace std;

int main() {
   
    int rows = 5;

  
    for (int i = 0; i <=rows; ++i) {
     
        if (i == 0 || i == 2) {
            for (int j = 0; j <5; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
        else if (i == 1) {
            cout << "*";
            for (int j = 0; j < 7; ++j) {
                cout << " "; 
            }
            cout << "*" << endl;
        }
   
        else if (i == 5) {
            cout << "*" << endl;
        }
    }

    return 0;
}
