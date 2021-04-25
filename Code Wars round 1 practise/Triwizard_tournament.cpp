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

int day(int n)
{
    if (n == 2 || n == 1)
    {
        return 1;
    }
    return day(n / 2) + n % 2;
}

void solve()
{
    int i, j, n, m;
    //start code here
    int x;
    cin >> x;
    cout << day(x);
}

int32_t main()
{

    solve();

    return 0;
}
