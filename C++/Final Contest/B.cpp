#include<bits/stdc++.h>
using namespace std;
int tt(long long n)
{
    int d = 0, s = 0;
    while (n)
    {
        ++d;
        s += (n % 10);
        n /= 10;
    }
    return s + d * d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        while (n > 9) n = tt(n);
        cout << n << "\n";
    }
}
