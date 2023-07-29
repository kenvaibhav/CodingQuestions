/*
int binarySearch(int *input, int n, int val)
{
    int start=0;
    int end=n-1;
    int mid=0;
    int p=0;
    while(start<=end){
        p=mid=(start+end)/2;
        if(val==input[p]){
            return p;
            break;
        }else if(val>input[p]){
            start=mid+1;
            end;
        }else{
            start;
            end=mid-1;
        }
    }
    if(start>end){
        return -1;
    } 
*/
// Bubble sort code
/*
#include<iostream>
using namespace std;
void bubbleSort(int array[],int size)
{
    for(int p=0;p<size-1;p++) 
    {
    for(int j=0;j<size-1;j++)
    {
        if(array[j] > array[j+1])
        {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        }

    }
    }

    
}

int main(){
    int input[10000]={2,5,1,12,31,17};
    //for size of input array
    // int size;
    // cin>>size;
    // for(int i=0;i<size;i++)
    // {
    //     cin>>input[i];
    // }
    bubbleSort(input,6);
    for(int i=0;i<6;i++)
    {
        cout<<input[i]<<" ";
    }
   // delete[] input;
}
*/
/*
int pairSum(int *input,int size,int x)
{
    int pairs = 0;
    int value;
    for(int i=0;i<size-1;i++)
    {
        value = input[i];
        for(int j = i+1;j<size;j++)
        {
        if(value + input[j] ==x )
        {
            pairs=pairs + 1;
        }
        }
    }
    return pairs;
}
*/
/*
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
*/
/*
void pushZerosEnd(int *input,int size){
    int store=input[0];
    for(int i=0;i<size;i++){
        if(input[i]==0){
            for(int j=i+1;j<size;j++){
                if(input[j]!=0){
                    store=input[j];
                    input[i]=store;
                    input[j]=0;
                    break;
                }
            }

        }
    }
}
*/
/*
// palindrome checking in character array
bool checkPalindrome(char str[]){
    //first we will determine size of char array using for loop
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count=count+1;
    }
    //now we will check for palindrome
    int i=0;
    int j=count-1;
    bool ans=0;
    for(int i=0;i<=(count/2);i++){
        int var1=str[i];
        int var2=str[j];
        if(var1==var2){
            ans=true;
        }else{
            ans=false;
            break;
        }
        j--;
    }
    return ans;
}
*/
/*
void trimSpaces(char input[]){
    int len = length(input);
    int a ;
    for(int i=0;i<len;i++){
        a=input[i];
        if(a==32){
            input.erase(input.begin()+i);
        }
    }
}
*/
/*
void reverseStringWordWise(char input[]){
    // first we will calculate input character array size
    int count=0;
    for(int i=0;input[i]!='\0';i++){
        count++;
    }
    //Now we will reverse the whole string 
    int j=count-1;
    int i=0;
    for(i;i<j;i++){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        j--;
    }
    // Now we will reverse the string before spaces so we will get proper Words
    i=0;
    j=i;
    for(i;i<count;i++){
        if(input[i]==' '){
            int k=i-1;
            for(j;j<k;j++){
                int temp=input[j];
                input[j]=input[k];
                input[k]=temp;
                k--;
            }
            j=i+1;
        }else  if(input[i]==' '){
            int k=i;
            for(j;j<k;j++){
                int temp=input[j];
                input[j]=input[k];
                input[k]=temp;
                k--;
            }
            j=i+1;
    } 

}
*/
#include <iostream>
#include <cstring>
using namespace std;

//#include "solution.h"

void printSubstrings(char input[]){
    int count=0;
    int i,j,k;
    for(i=0;i<count;i++){
        count++;
    }

    for(i=0;i<count;i++){
        for(j=i;j<count;j++){
            for(k=i;k<=j;k++){
                cout<<input[k];
            }
            cout<<endl;
        }
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}