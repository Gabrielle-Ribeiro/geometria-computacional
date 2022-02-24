#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, r, radius;
    
    cin >> n >> r;
    radius = r * (sin(acos(-1) / n) / (1-sin(acos(-1) / n)));

    printf("%.7lf\n", radius);
    return 0;
}
