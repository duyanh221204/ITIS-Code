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
        int m, n, d = 0;
        scanf ("%d %d", &m, &n);
        int a[m][n], k[1000002] = {};
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                scanf ("%d", &a[i][j]);
                if (a[i][j] < 0) a[i][j] *= -1;
                ++k[a[i][j]];
            }
        }
        if (k[0]) ++d;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (a[i][j] && k[a[i][j]])
                {
                    if (k[a[i][j]] > 1) d += 2;
                    else ++d;
                    k[a[i][j]] = 0;
                }
            }
        }
        printf ("%d\n", d);
    }
}
