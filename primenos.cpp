#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no upto which you want prime no's :";
    cin >> n;
    cout << endl;
    int i = 2;
    while (i <= n)
    {
        int j = 2;
        if (i == 2 && j == 2)
        {
            cout << 2 <<endl;
            i++;
        }
        else
        {
            
            for (j=2;j < i;j++)
            { 
                if(i%j==0){
                   
                   break; 
                }else if(i==j+1){
                    cout<<i <<endl;
                    break ;

                }
               
            }
           i++; 
        }
    }
    return 0;
}