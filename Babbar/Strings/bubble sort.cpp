#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&v,int n)
{
    if(n==0 || n==1) return;
    
    for(int i=0;i<n;i++) //i, i+1
    {
        if(v[i]>v[i+1]) swap(v[i],v[i+1]);
    }

    bubbleSort(v,n-1);
}

int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    bubbleSort(v,n-1);
    
    for(auto x:v) cout<<x<<" ";
}