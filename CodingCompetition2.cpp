#include<iostream>
using namespace std;
void reverse(string s, int size){
    int si = 0;
    int ei = size;
    string output[100];
    for(int i = size; i > -1; i--){
        if(s[i-1]== " "){
            si = i;
            for(;si<=ei;si++){
                output[si] = s[si];
            }
            ei=si-2;
            output[si] = " ";
            si = ei;
            i = i-2;
        }

    }
    for(int i = 0; output[i] != "\0"; i++){
        cout<<output[i];
    }

}
int main(){
    string s = "Hello World";
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    cout<<count;
    //reverse(s,count);
    return 0;
}