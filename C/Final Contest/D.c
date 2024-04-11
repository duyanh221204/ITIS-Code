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
        int n, m = 0;
        scanf ("%d", &n);
        int d[n + 2];
        char t[n + 2][52];
        for (int i = 1; i <= n; ++i)
        {
            scanf ("\n");
            gets (t[i]);
            int d1, d2, d3;
            scanf ("%d %d %d", &d1, &d2, &d3);
            d[i] = d1 + d2 + d3;
            m = (int)fmax(d[i], m);
        }
        for (int i = n; i; --i)
        {
            if (d[i] == m) printf ("%.3d %s %d\n", i, t[i], d[i]);
        }
    }
}
