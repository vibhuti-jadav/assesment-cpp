#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
 
    cout << "Enter a string: ";
 
    cin>>input;

 
    int freq[256] = {0};  

   
    for (int i = 0; i < input.length(); i++) {
        freq[input[i]]++;
    }


    cout << "Frequency of each letter:" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << endl;
        }
    }

    return 0;
}