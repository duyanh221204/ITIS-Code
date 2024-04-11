#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int T = 1;
    //scanf ("%d", &T);
    while (T--)
    {
        int n, k, x, y;
        scanf ("%d %d %d %d", &n, &k, &x, &y);
        int a[n + 2];
        a[0] = 0;
        long long s = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (a[i - 1] + x <= k) a[i] = a[i - 1] + x;
            else a[i] = a[i - 1] - y;
            s += a[i];
        }
        printf ("%lld", s);
    }
}
