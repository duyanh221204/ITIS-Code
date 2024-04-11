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
        int n, d = 0, t = 0;
        scanf ("%d", &n);
        int a[30] = {}, f[10] = {};
        while (n--)
        {
            int x;
            scanf ("%d", &x);
            x %= 10;
            if (f[x] < 3)
            {
                ++f[x];
                a[t++] = x;
            }
        }
        for (int i = 0; i < t - 2; ++i)
        {
            for (int j = i + 1; j < t - 1; ++j)
            {
                for (int k = j + 1; k < t; ++k)
                {
                    if ((a[i] + a[j] + a[k]) % 10 == 8)
                    {
                        d = 1;
                        printf ("YeS\n");
                        break;
                    }
                }
                if (d) break;
            }
            if (d) break;
        }
        if (!d) printf ("No\n");
    }
}
