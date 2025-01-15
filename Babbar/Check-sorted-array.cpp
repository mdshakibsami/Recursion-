#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>&v,int ind)
{
    if(ind == v.size()-1) return true;
    return v[ind]<=v[ind+1] & isSorted(v,ind+1);
}

int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<isSorted(v,0);
}