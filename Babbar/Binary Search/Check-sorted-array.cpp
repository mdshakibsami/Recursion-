#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>&v,int ind)
{
//  Linear Searching of an array using recursion
    if(ind == v.size()-1) return true;
    else if(v[ind]<=v[ind+1]) return isSorted(v,ind+1);
    else return false;
}

int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<isSorted(v,0);
}