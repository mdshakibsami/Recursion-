#include <bits/stdc++.h>
using namespace std;
#define int long long
int binary_search_root(int l, int r, int ans, int k)
{
    if (l > r)
        return ans;

    int mid = (l + r) / 2;

    if (mid * mid == k)
        return mid;
    if (mid * mid < k)
    {
        ans = mid;
        return binary_search_root(mid + 1, r, ans, k);
    }
    else
    {
        return binary_search_root(l, mid - 1, ans, k);
    }
}
signed main()
{

    int n;
    cin >> n;
    int l = 1, r = n;
    int ans;
    if (n == 0 || n == 1)
        cout << n << endl;
    else
    {

        cout << binary_search_root(l, r, ans, n);
    }
}