// #include<iostream>
// using namespace std;
// int main(){
// int n;
//     cin>>n;
//     int i = 1;
//     int q = 0;
//     while(i<=n){
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<j;
//             j++;
//         }
//         int counter = 0;
//         while(counter<q){
//             cout<<"*";
//             counter++;
//         }
//         q = q + 2;
       
//         int p = n-i+1;
//     while(p>0){
//         cout<<p;
//         p--;
//      }
//      cout<<endl;
//       //cout<<q<<endl;
//      i++;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
// int n;
//     cin>>n;
//     int i = 1;
//     int q = 0;
//     while(i<=n){
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<j;
//             j++;
//         }
//         int counter = 0;
//         while(counter<q){
//             cout<<"*";
//             counter++;
//         }
//         q = q + 2;
       
//         int p = n-i+1;
//     while(p>0){
//         cout<<p;
//         p--;
//      }
//      cout<<endl;
//       //cout<<q<<endl;
//      i++;
//     }
// }
// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
// 	int n;
//     cin>>n;
//     int first;
//     int second;
//     int a ;
// 	int b;
//     int i = 1;
//     int output;
//     int value = -2147483648;
//     int c;
//         while(i<=n){
//         cin>>a;
//         if(i==1){
//             first = a;
//         }
//         else if(i==2){
//             second = a;
//             if(n>=2){
//                 if(second>first){
//                     output = first;
//                 }else if(second<first){
//                     output = second;
//                 }else if(second == first){
//                     if(n==2){
//                         cout<<value;
//                     }
//                 }
//             }
//         }
        
        
//         else if(i>=3){
//             if(first>second){
//                 output = second;
//             }else if(first < second){
//                 output = first;
//             }
            
//         }
//             if(i>=3){
//                 if(c<first && c<second){
                    
//                 }else if(c>first ){
//                     second = first;
//                     output = second;
//                 }else if(c<first && c>second){
//                     second = c;
//                     output = second;
//                 }
//                 else if(c==first || c==second){
//                     output = second;
//                 }
//             }
//     }
//     cout<<output;
    
// }
// Diamond shaped pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    int j = (n+1)/2;
    int counter = 1;
    while(i<=j){
        int r = 1;
        while(r<=j-i+1){
            cout<<" ";
            r++;
        }
        int p = 1;
        while(p<=counter){
        cout<<"*";
        p++;

        }
        counter+=2;
        cout<<endl;
        i++;
    
    }
    i=1;
    int q = n-2;
    int w ;
    int measure = 2;
    while(i<=j-1){
        int t = 1;
        while(t<=measure){
            cout<<" ";
            t++;
        }
        w=1;
        while(w<=q){
            cout<<"*";
            w++;
        }
        measure++;
        q= q-2;
        cout<<endl;
        i++;
    }
}