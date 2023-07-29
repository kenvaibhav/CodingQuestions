#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(20);
    v[1] = 10;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;
    cout<< v[0] << endl<< v[1] << endl;
    cout<< v[2] << endl;
    cout<< v[3] << endl;
    cout<< v[4] << endl;
    cout<< "size : " << v.size()<< endl;
    return 0;
}