#include<iostream>

using namespace std;

int main(){
    

    
    for(int i=5;i>=1;i--){
         for(int k=i;k>0;k--){
            cout<<" "<<" ";
         }

        for(int j=i;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

