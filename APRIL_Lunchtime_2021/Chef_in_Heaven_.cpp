#include <iostream>
#include <iomanip>
#include <string>
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
    int L;
    string S;
    cin >> L >> S;
    int g = 0, b = 0;
    float p = 0;
    for (i = 1; i <= L; i++)
    {
        if (S[i - 1] == '1')
        {
            g++;
        }
        else
        {
            b++;
        }

        p = g / (float)i;
        if (p >= 0.5)
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (p < 0.5)
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
