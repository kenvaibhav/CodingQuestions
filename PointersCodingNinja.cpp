#include<iostream>
using namespace std;
/*
int main(){
    int a=7;
    int *ptr=0;
    // int *q=ptr;
    // (*q)++;
    // cout<<a<<endl;
    // cout<<(*q)++<<endl;
     cout<<a;
    *ptr=a;
}
*/


/*
void swap (char* x, char *y){
    char *t=x;
    x=y;
    y=t;
}
int main()
{
    char *x = "geeksquiz";
    char *y= "geeksforgeeks";
    char *t;
    swap(x,y);
    cout<<x<<" "<<y;
    t=x;
    x=y;
    y=t;
    cout<<" "<<x<<" "<<y;
    return 0;


}*/
int main(){
    char st[]="ABCD";
    for (int i=0; st[i] !='\0';i++){
        cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
    }
    
    return 0;
}