#include <iostream>
#include <iomanip>
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

void solve()
{
    int i, j, n, m;
    //start code here
    int x, y, xr, yr, D, res;
    cin >> x >> y >> xr >> yr >> D;
    float x1, x2;
    x1 = x / (float)xr;
    x2 = y / (float)yr;
    res = min(x1, x2);

    if (res >= D)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
