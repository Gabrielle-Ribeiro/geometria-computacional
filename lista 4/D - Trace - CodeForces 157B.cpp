#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> radius;
    int r, n;

    cin >> n;

    while(n--)
    {
        cin >> r;
        radius.push_back(r);
    }

    sort(radius.begin(), radius.end());

    double area = 0;
    double pi = 3.1415926536;

    for(int i=radius.size()-1; i >= 0; i-=2)
    {
        if(i==0)
            area += pi * (radius[i] * radius[i]);
        else
            area += pi * (radius[i] * radius[i]) - pi * (radius[i-1] * radius[i-1]);
    }

    cout.precision(12);
    cout << area << endl;

    return 0;
}