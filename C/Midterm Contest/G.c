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
        int x, y, z, a, b;
        scanf ("%d %d %d %d %d", &x, &y, &z, &a, &b);
        if (x + z >= a && y + z >= b && (long long)x + y + z >= a + b) printf ("YES\n");
        else printf ("NO\n");
    }
}
