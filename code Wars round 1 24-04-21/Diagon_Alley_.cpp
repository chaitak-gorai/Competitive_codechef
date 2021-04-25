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
    int i, j, n, m, res = 0;
    //start code here
    int a, b, k;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        res = (k / 2) * (a - b);
    }
    else
    {
        res = ((k + 1) / 2) * a - ((k - 1) / 2) * b;
    }
    cout << res << endl;
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
