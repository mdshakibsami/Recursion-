#include<iostream>
using namespace std;

void print_reverse(int n)
{
    if(n==0) return ;
    cout<<n<<" ";
    print_reverse(n-1);
}
int main()
{
    int n;  cin>>n;
    print_reverse(n);
}