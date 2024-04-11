#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int tt(char s[], int n)
{
    int d = 0, k[5] = {1, 10, 100, 1000, 10000};
    char c = 65;
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] < c) d -= k[s[i] - 65];
        else
        {
            c = s[i];
            d += k[s[i] - 65];
        }
    }
    return d;
}
int main()
{
    int T = 1;
    scanf ("%d", &T);
    while (T--)
    {
        char s[200002], k[6] = "ABCDE";
        scanf ("%s", s);
        int x = strlen(s), d, a[4], b[5];
        for (int i = 0; i < 4; ++i) a[i] = 2e9;
        for (int i = 0; i < 5; ++i) b[i] = 2e9;
        for (int i = 0; i < x; ++i)
        {
            if (s[i] < 69) a[s[i] - 65] = fmin(i, a[s[i] - 65]);
            b[s[i] - 65] = i;
        }
        d = tt(s, x);
        for (int i = 0; i < 4; ++i)
        {
            if (a[i] < 2e9)
            {
                char c = s[a[i]];
                s[a[i]] = 69;
                d = fmax(tt(s, x), d);
                s[a[i]] = c;
            }
        }
        for (int i = 0; i < 5; ++i)
        {
            if (b[i] < 2e9)
            {
                char c = s[b[i]];
                for (int j = 0; j < 5; ++j)
                {
                    if (c != k[j])
                    {
                        s[b[i]] = k[j];
                        d = fmax(tt(s, x), d);
                    }
                }
                s[b[i]] = c;
            }
        }
        printf ("%d\n", d);
    }
}
