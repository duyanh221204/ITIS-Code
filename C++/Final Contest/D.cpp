#include<bits/stdc++.h>
using namespace std;
int tt(long long n)
{
    int d = 0;
    while (n)
    {
        ++d;
        n /= 10;
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1, p[6];
    cin >> T;
    p[0] = 1;
    for (int i = 1; i <= 5; ++i) p[i] = p[i - 1] * 10;
    while (T--)
    {
        int a, b, c, d = 0;
        long long k;
        cin >> a >> b >> c >> k;
        for (int i = p[a - 1]; i < p[a]; ++i)
        {
            int l = max(p[b - 1], p[c - 1] - i), r = min(p[b] - 1, p[c] - i - 1);
            if (l <= r)
            {
                if (r - l + 1 >= k && tt(i + k + l - 1) == c)
                {
                    d = 1;
                    cout << "FOUND : " << i << " + " << l + k - 1 << " = " << i + k + l - 1 << "\n";
                    break;
                }
                k -= (r - l + 1);
            }
        }
        if (!d) cout << "NOT FOUND\n";
    }
}
