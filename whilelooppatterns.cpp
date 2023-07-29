/*
1
1 2
1 2 3
1 2 3 4
*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;// n means it will print no of rows
    int i = 1; // i is count of no of rows
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<j<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}*/
/*Pattern 2
1
2 3
4 5 6
7 8 9 10
*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    int val = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<val<<" ";
            j = j + 1;
            val = val + 1;
        }
        cout<<endl;
        i = i+1;
    }

}
*/
//Pattern 3
/*
     1
   2 3
 4 5 6
 */
/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    int val = 1;
    while(i<=n){
        int p = 1;
        while(p<= n-i){
            cout<<" ";
            p = p+1;
        }
        
        int j = 1;
        while(j<=i ){

            cout<<val;
            j = j + 1;
            val = val + 1;
        }
        cout<<endl;
        i = i+1;
    }

}*/
// Next Pattern
/*
1
23
345
4567
56789
*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    int val = 1;
    int k= 1;
    while(i<=n){
        int j = 1;
        if(i>2){
         while(j<=i){
             if(j==2){
                  k = val;
             }
            cout<<val;
            j = j + 1;
            val = val + 1;
            }
            }else if(i==2){
                val = 2;
                while(j<=i){
             if(j==2){
                  k = val;
             }       
            cout<<val;
            j = j + 1;
            val = val + 1;
            }
            }
            else {
                while(j<=i){
                    cout<<val;
                    j= j+1;
                    val= val + 1;
                }
            }

             
        cout<<endl;
        i = i+1;
        val = k;
    }

}*/

// Next Pattern
/*
       1
     2 3
   3 4 5       
 4 5 6 7
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int i = 1;
    int val = 1;
    int k= 1;
    while(i<=n){
         int p = 1;
        while(p<= n-i){
            cout<<" ";
            p = p+1;
        }
        
        int j = 1;
        if(i>2){
         while(j<=i){
             if(j==2){
                  k = val;
             }
            cout<<val<<" ";
            j = j + 1;
            val = val + 1;
            }
            }else if(i==2){
                val = 2;
                while(j<=i){
             if(j==2){
                  k = val;
             }       
            cout<<val<<" ";
            j = j + 1;
            val = val + 1;
            }
            }
            else {
                while(j<=i){
                    cout<<val<<" ";
                    j= j+1;
                    val= val + 1;
                }
            }

             
        cout<<endl;
        i = i+1;
        val = k;
    }

}
*/

// Next pattern of stars
/* if n=4
   *
  ***
 *****
*******
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
    
//     cin>>n;
//     int row_no = 1;
//     int no_of_stars = 1;
//     int no_of_spaces;
//     int key;
//     while(row_no <= n){
//         no_of_spaces = 1;
//         while(no_of_spaces <= n-row_no){
//             cout<<" ";
//             no_of_spaces = no_of_spaces + 1;
//         }
//         key = 1;
//         while(key <= no_of_stars){
//             cout<<"*";
//             key = key + 1;
//         }
//         cout<<endl;
//         row_no = row_no + 1;
//         no_of_stars = no_of_stars + 2;
//         }

// }

// next pattern 
/*
   *
  **
 ***
****
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rows = 1;
    int columns;
    int no_of_spaces;
    while(rows<=n){
        no_of_spaces = 1;
        while(no_of_spaces <= n-rows){
            cout<<' ';
            no_of_spaces++;
        }
        columns = 1;
        while(columns<=rows){
            cout<<'*';
            columns++;
        }
        cout<<endl;
        rows++;

    }
}
*/
// Next pattern
/*
if n=4;
   1
  232
 34543
4567654
*//*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rows=1;
    int columns;
    int spaces;
    int value;
    while(rows<=n){
        spaces = 1;
        while(spaces<=n-rows){
            cout<<' ';
            spaces++;
        }
        columns=1;
        value=rows;
        while(columns<=rows){
            cout<<value;
            value++;
            columns++;
        }
        value=value-2;
        columns=1;
        while(columns<rows){
            cout<<value;
            value--;
            columns++;
        }
        cout<<endl;
        rows++;
    }

    return 0;
}
*/
#include <iostream>
   using namespace std;
   int main(){      bool state;
       int num;
      cout << "Enter 0 for false or 1 for true";
      cin>>state;
       cout << "Enter a number";
       cin >> num;
       if(state&&num%2==1&&(50<num<100)){
          cout << "True";     }
     else{
         cout << "False";
     }
    return 0;
  }
  