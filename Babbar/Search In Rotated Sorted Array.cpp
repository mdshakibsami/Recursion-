#include <bits/stdc++.h>
using namespace std;

int find_pivot(vector<int> v, int l, int r)
{
    int mid = (l + r) / 2;
    // 8 9 12 5 6
    //      s
    if (l > r)
        return mid;
    if (v[mid] >= v[0])
    {
        return find_pivot(v, mid + 1, r);
    }
    else
    {
        return find_pivot(v, l, mid - 1);
    }
}

int binary_search(vector<int> v, int l, int r, int key)
{
    if (l > r)
        return 0;
    int mid = (l + r) / 2;

    if (v[mid] == key)
        return mid;
    if (v[mid] < key)
    {
        return binary_search(v, mid + 1, r, key);
    }
    else
    {
        return binary_search(v, l, mid - 1, key);
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n == 1)
    {
        if (v[0] == k)
            return 0;
        else
            return -1;
    }
    else
    {
        int pivot = find_pivot(v, 0, n - 1); // return the ending of the rotated array
        int x = binary_search(v, 0, pivot, k);
        int y = binary_search(v, pivot + 1, n - 1, k);
        cout << pivot;

        if (x)
            cout << x << endl;
        else if (y)
            cout << y << endl;
        else
            cout << -1 << endl;
    }
}