// this is the program to convert fahrenheit value to celsius 

#include<iostream>
using namespace std;

int main(){
    int s;
    int e;
    int w;
    cin>>s>>e>>w;
    while(s<=e){
        int c = ((s-32)*5)/9;
        cout<<s<<" "<<c<<endl;
        s = s+w;
    }
    return 0;
}