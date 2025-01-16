#include<bits/stdc++.h>
using namespace std;
// void print_reverse(string s,int i, int size)
// {
//     if(i==size+1) return;
//     print_reverse(s,i+1,size); // void function don't need to return statement while calling function.
//     cout<<s[i];
// }

void print_reverse(string &s, int i,int j)
{
    // cout<<"Call recieved for :"<<s<<endl;
    if(i>j) return;
    swap(s[i],s[j]);
    print_reverse(s,i+1,j-1);
}

int main()
{
    string s;   cin>>s;
    print_reverse(s,0,s.size()-1);
    cout<<s<<endl;
}