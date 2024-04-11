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
        int n, d = 0, k[5] = {};
        scanf ("%d", &n);
        while (n--)
        {
            int x;
            scanf ("%d", &x);
            ++k[x];
        }
        d += (k[3] + k[4]);
        k[1] -= k[3];
        if (k[2])
        {
            d += (k[2] / 2);
            k[2] %= 2;
            if (k[2])
            {
                ++d;
                k[1] -= 2;
            }
        }
        if (k[1] > 4)
        {
            d += (k[1] / 4);
            k[1] %= 4;
        }
        if (k[1] > 0) ++d;
        printf ("%d", d);
    }
}
