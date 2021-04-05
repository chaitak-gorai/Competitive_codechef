#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A;
    cout << "";
    cin >> B;
    cout << "";
    cin >> B;
    cout << "";
    if (A == B || A == C || B == C)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}