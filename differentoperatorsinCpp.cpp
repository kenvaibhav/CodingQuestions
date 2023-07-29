/*
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << " "<< y;
}
*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i ;
//     int fn;
//     int a = 1, b = 1;
//     if(n==1 || n==2){
//         cout<<a;
//     }else{
//     for (i = 3; i <= n; i++)
//     {
//         fn = a + b;
//         a = b;
//         b = fn;
//         if (i == n)
//         {
//             cout << fn;
//             break;
//         }
//     }
//     }
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int primeno = 3;
//     int j = 2;
//     if(n>=2){
//         cout<<2;
//     }
//     for(primeno = 3; primeno<=n ; primeno++ ){
//         for(j=2 ; j<primeno ; j++){
//             if(primeno % j == 0){
//                 break;
//             }else if(j == primeno - 1){
//                 cout<<primeno<<endl;
//             }
//         }
//     }
//
/*
#include <iostream>
#include<bits/stdc++.h>
using namespace std; 


int main() {
    int n;
    cin>>n;
    int number = n;
    int sum = 0;
    int ldigit;
    int i = 0;
    while(number>0){
        ldigit = number%2;
        sum = sum + ldigit*pow(2,i);
        i++ ;
        number = number/10;
    }
    cout<<sum;

}*/

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;
//     int i = 0;
//     int number = n;
//     int rem = 0;
//     int ans = 0;
//     int placeval = 1;
//     while(number > 0){
//         rem = number%2;
//         ans = ans + rem * placeval;
//         cout<<ans<<endl;
//         number = number/2;
//         placeval = placeval * 10;
//     }
//     cout<<ans;
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     int value;
//     int check = n;
//     int i ;
//     while(true){
//         value = 1;
//         i = 1;
//     while(value < check){
//         if(check == value){
//             cout<<i;
//             break;
//         }
//         i++;
//         value = i*i;
//     }
//     if(check == value){
//         break;
//     }
//     check = check - 1;
//     }
// }
// square root 
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number;
    int i = 1 ;
    number = 1;
    while(number <= n){
        i++;
        number = i*i;
    }
    cout<<i-1;
}*/
#include<iostream>
using namespace std;

 int func(int a){
    a += 10;
    return a;
}

int main() {
    int a = 5;
    func(a);
    cout << a;
}
