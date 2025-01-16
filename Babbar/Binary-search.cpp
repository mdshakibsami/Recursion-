#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>v,int l,int r,int key)
{
    int mid = (l+r)/2;

    if(l>r) return 0;
    
    if(v[mid]==key) return 1;
    else if(v[mid]<key)
    {
       return  binary_search(v,mid+1,r,key);
    }
    else 
    {
       return binary_search(v,l,mid-1,key);
    }
}

int main()
{
    int n;  cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int key;    cin>>key;

    if(binary_search(v,0,n-1,key)==1) cout<<"YES, key is found"<<endl;
    else cout<<"NO, key is not found"<<endl;

}