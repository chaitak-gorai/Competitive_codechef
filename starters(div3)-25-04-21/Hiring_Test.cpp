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
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    char arr[n][m];
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> arr[i][j];
        }
    }
    fo(i, n)
    {
        int F = 0;
        int U = 0;
        int P = 0;
        fo(j, m)
        {
            if (arr[i][j] == 'F')
            {
                F++;
            }
            else if (arr[i][j] == 'U')
            {
                U++;
            }
            else if (arr[i][j] == 'P')
            {
                P++;
            }
        }
        if (F >= x)
        {
            cout << "1";
        }
        else
        {
            if ((F >= x - 1) && (P >= y))
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
    }
    cout << endl;
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
