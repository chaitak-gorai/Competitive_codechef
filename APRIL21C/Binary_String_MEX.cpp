#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

int dectoBinary(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int j = 0;
    int rem;
    int ires;
    while (n > 0)
    {
        rem = n % 2;
        if (j == 0)
        {
            ires = rem;
        }
        else
        {
            ires += rem * pow(10, j);
        }
        n = n / 2;
        j++;
    }
    return ires;
}
bool solve(string t, string s)
{
    if (s == t)
        return true;
    int n = s.size();
    int m = t.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[j] == s[i])
            j++;
        if (j == t.size())
            return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {

        string S;
        cin >> S;

        for (int N = 0; N < 10000000000; N++)
        {

            int s = 0;
            string str;
            s = dectoBinary(N);

            stringstream ss;
            ss << s;
            ss >> str;

            if (solve(str, S) == 0)
            {
                cout << str << endl;
                break;
            }
        }
    }
    return 0;
}
