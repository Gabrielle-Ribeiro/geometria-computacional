#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, t, s;
    cin >> d >> t >> s;

    if(d*1.0/s <= t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}