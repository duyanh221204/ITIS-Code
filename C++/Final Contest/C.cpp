#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n, k, d = 0;
        cin >> n >> k;
        int f[k + 2] = {};
        while (n--)
        {
            int x;
            cin >> x;
            for (int i = x; i <= k; i += x)
            {
                ++f[i];
                d = max(f[i], d);
            }
        }
        for (int i = k; i; --i)
        {
            if (f[i] == d)
            {
                cout << i;
                break;
            }
        }
    }
}
