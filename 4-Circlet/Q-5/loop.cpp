#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = i; j <= n; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int j = n - 1; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl; // Move to the next row
    }

    return 0;
}