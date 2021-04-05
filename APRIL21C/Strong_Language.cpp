#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int j = 0; j < T; j++)
    {
        int N, K;
        cin >> N >> K;
        string S;

        cin >> S;
        int count = 0;
        int maxv = 0;
        int i = 0;
        for (i = 0; i < N; i++)
        {
            if (S[i] == '*')
            {
                count++;
            }
            else
            {
                count = 0;
            }

            if (count >= K)
            {

                cout << "YES" << endl;
                break;
            }
        }
        if (i == N)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
