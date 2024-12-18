#include<iostream>
#include<string.h>
using namespace std;

int main(){

string name ;
cout<<"Enter any string:";
cin>>name;

string name2 = name;



int len = name.length()-1;


int count = 0;

for(int i=len; i>=0; i--){
    if(name[i] != name[count]){
        cout << "The given string is not Palindrome.";
        break;
    }
    else{
      count++;  
    }
  
}

if(count == len+1){
     cout << "The given string is a Palindrome.";
}


    return 0;
}