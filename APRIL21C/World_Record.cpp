#include <iostream>
#include <iomanip>
using namespace std;
const float rec = 9.58;
#define sl(x) scanf("%f", &x)
float round(float var)
{

    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    int T = 1;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        float k1, k2, k3, v, u, t;
        sl(k1);
        cout << "";
        sl(k2);
        cout << "";
        sl(k3);
        cout << "";
        sl(v);

        u = k1 * k2 * k3 * v;
        t = 100 / (float)u;
        t = round(t);

        if (t < rec)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}