// this is the program for printing character patterns in cpp
#include<iostream>
using namespace std;

int main(){


int n;
    cin>>n;
    int i = 1;
    int j;
    while(i<=n){
        j = 1;
        char ch = 'A'+n-i;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}