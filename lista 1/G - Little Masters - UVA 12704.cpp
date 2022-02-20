#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x, y, r;
    
    cin >> t;
    
    while(t--)
    {
        cin >> x >> y >> r;
        double hypotenuse = sqrt(x*x + y*y);
        printf("%.2lf %.2lf\n", r-hypotenuse, r+hypotenuse);
    }

    return 0;
}
