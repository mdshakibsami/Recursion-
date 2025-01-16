#include <iostream>
#include <vector>
using namespace std;

vector<string> v = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
void sayDigit(int n)
{
    if (n == 0)
        return;
    int x = n % 10;
    n /= 10;
    sayDigit(n);
    cout << v[x] << endl;
}
int main()
{
    int n;
    cin >> n;

    sayDigit(n);
}