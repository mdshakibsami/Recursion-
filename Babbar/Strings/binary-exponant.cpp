#include<bits/stdc++.h>
using namespace std;
#define int long long
int power(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;

    int ans = power(a,b/2);

    if(b%2==0)
    {
        return ans*ans;
    }
    else
    {
        return a*ans*ans;
    }
}

signed main()
{
    //a^b => if b is even x = a^b/2 the = x*x; if odd = a*x*x; 
    int a,b;    cin>>a>>b;
    int ans = power(a,b);
    cout<<ans<<endl;
}