#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int kt(int n)
{
    if (n < 4) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    int x = sqrt(n);
    for (int i = 5; i <= x; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
int main()
{
    int T = 1;
    //scanf ("%d", &T);
    while (T--)
    {
        long long n;
        scanf ("%lld", &n);
        int d = 0, a = sqrt(n), b = sqrt(sqrt(n));
        for (int i = 2; i <= n; ++i)
        {
            if ((long long)pow(i, 8) <= n)
            {
                if (kt(i)) ++d;
            }
            else break;
        }
        for (int i = 2; i <= b; ++i)
        {
            if (kt(i))
            {
                for (int j = a / i; j > i; --j)
                {
                    if (kt(j)) ++d;
                }
            }
        }
        printf ("%d", d);
    }
}
