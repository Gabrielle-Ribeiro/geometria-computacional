#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, x, y;
    vector<pair<int, int> > balls;
    bool is_possible;
    
    cin >> t;
    
    while(t--)
    {
        is_possible = false;
        
        cin >> n >> k;
        
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            balls.push_back(make_pair(x, y));
        }
        
        for(int i=0; i<n; i++)
        {
            int cont = 0;
            for(int j=0; j<n; j++)
            {
                if(abs(balls[i].first - balls[j].first) + abs(balls[i].second - balls[j].second) <= k)
                {
                    cont++;
                }
            }
            if(cont == n)
            {
                is_possible = true;
                break;
            }
        }
        
        if(is_possible)
            cout << "1" << endl;
        else
            cout << "-1" << endl;
        
        balls.clear();
    }

    return 0;
}