#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int T = 1;
    scanf ("%d", &T);
    while (T--)
    {
        int n;
        scanf ("%d", &n);
        long long a[n + 2], b[n + 2], d, d1 = 1e18, d2 = 1e18, d3 = 1e18, d4 = 1e18;
        for (int i = 1; i <= n; ++i) scanf ("%lld", &a[i]);
        for (int i = 1; i <= n; ++i) scanf ("%lld", &b[i]);
        for (int i = 1; i <= n; ++i)
        {
            d1 = fmin(abs(a[1] - b[i]), d1);
            d2 = fmin(abs(a[n] - b[i]), d2);
            d3 = fmin(abs(b[1] - a[i]), d3);
            d4 = fmin(abs(b[n] - a[i]), d4);
        }
        d = fmin(abs(a[1] - b[1]) + abs(a[n] - b[n]), abs(a[1] - b[n]) + abs(a[n] - b[1]));
        d = fmin(abs(a[1] - b[1]) + d2 + d4, d);
        d = fmin(abs(a[n] - b[n]) + d1 + d3, d);
        d = fmin(abs(a[1] - b[n]) + d2 + d3, d);
        d = fmin(abs(a[n] - b[1]) + d1 + d4, d);
        d = fmin(d1 + d2 + d3 + d4, d);
        printf ("%lld\n", d);
    }
}
