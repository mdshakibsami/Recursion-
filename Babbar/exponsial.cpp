#include<iostream>
using namespace std;

int expo(int n)
{
    if(n==0) return 1;
    return 2*expo(n-1);
}
int main()
{
    int n;  cin>>n;
    cout<<expo(n)<<endl;
}