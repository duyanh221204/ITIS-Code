#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        int n, d = 0;
        cin >> n;
        string s[n];
        for (string& i : s) cin >> i;
        unordered_map<string, int> mp1, mp2;
        for (string& i : s)
        {
            if (i.front() == i.back())
            {
                d = 1;
                break;
            }
            string s1 = i, s2 = i;
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            s2.pop_back();
            if (mp1[s1] || mp1[s2] || mp2[s1])
            {
                d = 1;
                break;
            }
            mp1[i] = 1;
            i.pop_back();
            mp2[i] = 1;
        }
        if (d) cout << "YES\n";
        else cout << "NO\n";
    }
}
