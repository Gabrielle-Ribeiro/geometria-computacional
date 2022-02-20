#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, x, y;
    vector<pair<int, int> > dots;
    bool symetry;
    
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        int min_x = 100000, max_x = -100000;
    
        for(int i=0; i<n; i++)
        {
            cin >> x >> y;
            dots.push_back(make_pair(x, y));
        
            if(x < min_x) min_x = x;
            if(x > max_x) max_x = x;
        }
    
        int line = (min_x + max_x);
    
        symetry = true;
        for(int i=0; i<dots.size(); i++)
        {
            pair<int, int> temp = make_pair(line-dots[i].first, dots[i].second);
            auto it = find(dots.begin(), dots.end(), temp);
            
            if(it == dots.end())
            {
                symetry = false;
                break;
            }
        }
        
        if(symetry) cout << "YES\n";
        else cout << "NO\n";
        
        dots.clear();
    }

    return 0;
}
