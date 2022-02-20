#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, y;

    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<int> miners;
        vector<int> diamonds;
        int sum = 0;

        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            if(x == 0)
            {
                miners.push_back(y);
            }
            else
            {
                diamonds.push_back(x);
            }
        }

        sort(miners.begin(), miners.end());
        sort(diamonds.begin(), diamonds.end());

        for(int i=0; i<n; i++)
        {
            sum += sqrt(pow(x, 2) + pow(y, 2));
        }

        cout << sum << endl;
    }
    
    return 0;
}