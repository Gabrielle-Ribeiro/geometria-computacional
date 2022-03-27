#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v[3];
    bool is_triangle = false;

    cin >> v[0] >> v[1] >> v[2];
    sort(v, v+3);

    int a, b, c;

    for(a=v[2];;)
    {
        for(b=v[1]; b <= a; b++)
        {
            for(c=v[0]; c <= b; c++)
            {
                if(a+b > c && a+c > b && b+c > a)
                {
                    is_triangle = true;
                    break;
                }
            }
            if(is_triangle) break;

        }
        if(is_triangle) break;

        if(a < 100) a++;
    }

    cout << (a - v[2]) + (b - v[1]) + (c - v[0]) << endl;

    return 0;
}