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
    int i, j, n = 0, m = 0;
    //start code here
    int N, A, B;
    cin >> N >> A >> B;
    string S[N];
    fo(i, N)
    {
        cin >> S[i];
        // cout << S[i] << endl;
    }
    fo(i, N)
    {
        string p = S[i];
        if (p[0] == 'E' || p[0] == 'Q' || p[0] == 'U' || p[0] == 'I' || p[0] == 'N' || p[0] == 'O' || p[0] == 'X')
        {
            n += A;
        }
        else
        {
            m += B;
        }
    }
    if (n > m)
    {
        cout << "SARTHAK" << endl;
    }
    else if (n < m)
    {
        cout << "ANURADHA" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
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
