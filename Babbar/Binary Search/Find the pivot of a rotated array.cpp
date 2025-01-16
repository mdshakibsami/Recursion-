
/*

|      /
|     /
|    /       /
|           /
|          /
|___________________________

*/


#include<bits/stdc++.h>
using namespace std;

int binary_in_rotate(vector<int>v,int l,int r)
{
    int mid = (l+r)/2;
    if(l>r) return mid; // return first pivot(last element) or (mid+1) returns first element index

    if(v[mid]>=v[0]) // No duplicate elements
    {
       return binary_in_rotate(v,mid+1,r);
    }
    else
    {
       return  binary_in_rotate(v,l,mid-1);

    }
}
int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

   cout<< binary_in_rotate(v,0,n-1);

}


