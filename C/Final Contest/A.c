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
        long long a, b;
        scanf ("%lld %lld", &a, &b);
        if (a % 2 == b % 2) printf ("YES");
        else printf ("NO");
    }
}
