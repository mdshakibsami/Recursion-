#include<bits/stdc++.h>
using namespace std;

int findPeak(vector<int>v,int l,int r)
{
    // if(l<r) return 0; Because there always exist answer

    int mid = (l+r)/2;

    if(v[mid]>v[mid+1] && v[mid]>v[mid-1])
    {
        return mid;
    }
    // Question says increase or decrease cause mountain array
    if(v[mid]<v[mid+1] )
    {
        return findPeak(v,mid+1,r);
    }
    else
    {
        return findPeak(v,l,mid-1);

    }

}
int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = findPeak(v,0,n-1);
    cout<<ans<<endl;
}