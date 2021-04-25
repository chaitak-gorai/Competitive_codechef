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

void solve()
{
    int i, j, n, m, st, ed, st1, ed1, res;
    //start code here
    cin >> n;
    array<int, 2> arr[n];
    fo(i, n)
    {

        fo(j, 2)
        {
            cin >> arr[i][j];
        }
    }
    sort(arr, arr + n);

    st = arr[0][0];
    ed = arr[0][1];
    res = 1;
    for (i = 1; i < n; i++)
    {
        st1 = arr[i][0];
        ed1 = arr[i][1];
        if (st1 >= ed)
        {
            st = st1;
            ed = ed1;
            res++;
        }
        else if ((st1 >= st && st1 < ed) && ((ed - st) > (ed1 - st1)))
        {
            st = st1;
            ed = ed1;
        }
    }

    cout << res << endl;
}

int32_t main()
{

    solve();

    return 0;
}
