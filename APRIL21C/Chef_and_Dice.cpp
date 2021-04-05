#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        long int N;
        cin >> N;
        long int l;
        int count = 0;
        int f0, f1, f2, f3, f4;
        f0 = 20;
        f1 = 18;
        f2 = 15;
        f4 = 11;
        long int f, sum;
        l = N / 4;
        int d = N % 4;
        if (l == 0)
        {
            if (d == 1)
            {
                sum = 20;
            }
            else if (d == 2)
            {
                sum = 36;
            }
            else if (d == 3)
            {
                sum = 51;
            }
        }
        else if (l == 1)
        {
            if (d == 1)
            {
                sum = 11 + 45 + 20;
            }
            else if (d == 2)
            {
                sum = 22 + 30 + 36;
            }
            else if (d == 3)
            {
                sum = 33 + 15 + 36 + 15;
            }
            else if (d == 0)
            {
                sum = 60;
            }
        }

        else if (l >= 2)
        {
            if (d == 1)
            {
                sum = (l - 1) * 44 + 11 + 45 + 20;
            }
            else if (d == 2)
            {
                sum = (l - 1) * 44 + 22 + 30 + 36;
            }
            else if (d == 3)
            {
                sum = (l - 1) * 44 + 33 + 15 + 36 + 15;
            }
            else if (d == 0)
            {
                sum = (l - 1) * 44 + 60;
            }
        }
        cout << sum << endl;
    }
}
