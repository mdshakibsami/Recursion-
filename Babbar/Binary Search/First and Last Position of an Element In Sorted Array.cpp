#include<iostream>
#include<vector>
using namespace std;

int first_position(vector<int>&v,int l,int r,int key,int &a)
{
    int mid = (l+r)/2;

    if(l>r) return 0;
    if(v[mid]==key) 
    {
        a=mid;
        return first_position(v,l,mid-1,key,a);
    }
    if(v[mid]<key)
    {
        return first_position(v,mid+1,r,key,a);
    }
    else
    {
        return first_position(v,l,mid-1,key,a);

    }
}


int last_position(vector<int>&v,int l,int r,int key,int &b)
{
    int mid = (l+r)/2;
    if(l>r) return 0;


    if(v[mid]==key) 
    {
        b=mid;
        return last_position(v,mid+1,r,key,b);

    }
    if(v[mid]<key)
    {
        return last_position(v,mid+1,r,key,b);
    }
    else
    {
        return last_position(v,l,mid-1,key,b);

    }
}
int main()
{
    int n,k;    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int a=-1,b=-1;
    int x = first_position(v,0,n-1,k,a);
    int y = last_position(v,0,n-1,k,b);

    cout<<a<<" "<<b<<endl;

    
}