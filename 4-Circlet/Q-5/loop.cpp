#include <iostream>
using namespace std;



int main() {
    
    int n = 5;
    
   
    for (int i = 1; i<=n; i++) {
 
        for (int j = 1; j<=n-i; j++) {
            cout <<" "<<" ";
        }


        for (int j = n-i+1; j <=n ; j++) {
            cout << j << " ";
        }


        for (int j = n-1; j >= n-i+1; --j) {
            cout << j << " ";
        }

        cout << endl;
    }


    return 0;
}
