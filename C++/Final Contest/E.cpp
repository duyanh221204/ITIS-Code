#include<bits/stdc++.h>
using namespace std;
struct ds
{
    int h, w;
    string ht, sbd;
};
int cmp(ds& a, ds& b)
{
    double x1 = (double)a.h / a.w, x2 = (double)b.h / b.w;
    if (x1 != x2) return x1 > x2;
    if (a.h != b.h) return a.h > b.h;
    if (a.w != b.w) return a.w < b.w;
    return a.sbd < b.sbd;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ds a[n];
        for (int i = 0; i < n; ++i)
        {
            cin.ignore();
            getline (cin, a[i].ht);
            cin >> a[i].h >> a[i].w;
            a[i].sbd = to_string(i + 1);
            while (a[i].sbd.size() < 5) a[i].sbd = "0" + a[i].sbd;
        }
        sort(a, a + n, cmp);
        for (ds& i : a) cout << "SBD " << i.sbd << ": " << i.ht << ", chieu cao " << i.h << ", can nang " << i.w << "\n";
    }
}
