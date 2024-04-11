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
        int n;
        scanf ("%d", &n);
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n - i; ++j) printf ("  ");
            if (i == 1) printf ("1");
            else
            {
                for (int j = i; j < i * 2; ++j) printf ("%d ", j);
                for (int j = i * 2 - 2; j >= i; --j)
                {
                    printf ("%d", j);
                    if (i < j) printf (" ");
                }
            }
            printf ("\n");
        }
    }
}
