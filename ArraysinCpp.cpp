// #include<iostream>
// using namespace std;

// // int main(){
// // int n;
// // cin>>n;
// // int array[100000];
// // // for taking input of n elements and filling the values in array
// // for(int i=0; i<n ;i++){
// //     cin>>array[i];
// //     cout<<" ";
// // }
// // // sum of array elements
// // int sum = 0;
// // for(int i=0; i<n ; i++){
// //     sum = sum + array[i];
// // }
// // cout<<sum;

// // }
// int main(){
//     int t,n,array[10000];
//     cin>>t;
//     cin>>n;
//     int i=0;
//     while(i<t){
//         for(int p=0;p<n;p++){
//             cin>>array[p];
//         }
//         int x;
//         cin>>x;
//         for(int q=0;q<n;q++){
//             if(x==array[q]){
//                 cout<<q;
//                 break;
//             }
//             if(q==n-1){
//                 cout<<-1;
//             }
//         }
//         i++;
//     }
// }
/*#include<iostream>


using namespace std;
void linearSearch(int array[],int no_of_elements,int searchVal){
        for(int q=0;q<no_of_elements;q++){
            if(searchVal==array[q]){
                cout<<q;
                break;
            }
            if(q==no_of_elements-1){
                cout<<-1;
            }
        }
}
int main(){
    int t,n,arr[10000];
    cin>>t;
    int i=0;
    while(i<t){
        int n;
        cin>>n;
        //int *arr = new int[n];
         for(int p=0;p<n;p++){
            cin>>arr[p];
        }
        int val;
        cin>>val;
        //cout<<linearSearch(arr,n,val);
        linearSearch(arr,n,val);
        i++;
    }
}*/
