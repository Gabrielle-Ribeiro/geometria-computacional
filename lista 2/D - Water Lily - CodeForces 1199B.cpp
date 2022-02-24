#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, l;
    cin >> h >> l;
    
   printf("%.13lf\n", (pow(l,2) - pow(h,2)) / (2 * h));

    return 0;
}
