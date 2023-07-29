#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int basicsalary;
    cin>>basicsalary;
    cout<<" ";
    double hra = (0.2 * basicsalary) ;
    double da = (0.5 * basicsalary) ;
    double pf = (0.11 * basicsalary) ;
    int allowance;
    char grade;
    cin>>grade;
    int key = grade;
    if(key==65){
        allowance = 1700;
    }else if (key==66){
        allowance = 1500;
    }else {
        allowance = 1300;
    }
    float totalsalary;
    totalsalary = basicsalary + hra + da + allowance - pf;
    
    
    cout<<roundf(totalsalary);
	
}
// what is int/int = int or float?
