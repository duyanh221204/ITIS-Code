#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int T = 1, f[30] = {};
    scanf ("%d", &T);
    f[1] = 1;
    for (int i = 2; i <= 28; ++i) f[i] = f[i - 2] + f[i - 1];
    while (T--)
    {
        int k, n;
        scanf ("%d %d", &k, &n);
        if (n > 29) printf ("0");
        else
        {
            int d = 0, f1 = f[n - 1], f2 = f[n - 2], x = k / f[n - 2];
            for (int i = 0; i <= x; ++i)
            {
                int m = k - i * f2;
                if (m % f1 == 0 && m / f1 >= i) ++d;
            }
            printf ("%d", d);
        }
        printf ("\n");
    }
}
