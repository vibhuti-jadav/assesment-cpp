#include<iostream>
#include<string.h>

using namespace std;

int main(){

string name = "madam";

string name2;

string name2 = name;

int len = name.length()-1;

int count = 0;

for(int i=len; i>=0; i--){
    if(name[i] != name[count]){
        cout << "not palendrome";
        break;
    }
    else{
      count++;                   
    }
  
}

if(count == len+1){
     cout << "is palendrome";
}

    return 0;
}