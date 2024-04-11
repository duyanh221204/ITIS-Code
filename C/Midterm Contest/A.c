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
        long long a, b;
        scanf ("%lld %lld", &a, &b);
        ++a, --b;
        printf ("%lld", (a + b) * (b - a + 1) / 2);
    }
}
