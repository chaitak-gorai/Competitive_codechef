#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define int long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w, wr;
        cin >> n >> w >> wr;
        map<int, int> mp;
        int Ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> Ar[i];
            mp[Ar[i]]++;
        }
        if (wr >= w)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            w -= wr;
            for (int i = 0; i < n; i++)
            {
                if (mp[Ar[i]] >= 2)
                {
                    int count = mp[Ar[i]];
                    if (count % 2 == 0)
                    {
                        w -= count * Ar[i];
                    }
                    else
                    {
                        w -= (count - 1) * Ar[i];
                    }
                    mp[Ar[i]] = 0;
                }
                if (w <= 0)
                {
                    break;
                }
            }
            if (w <= 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}