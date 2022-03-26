#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, y, rx, ry, r, yx, yy;
    vector<pair<int, int> > routers;
    vector<int> radius;
    
    cin >> t;
    
    for(int i=1; i<=t; i++)
    {
        cin >> n >> y;
        
        while(n--)
        {
            cin >> rx >> ry >> r;
            routers.push_back(make_pair(rx, ry));
            radius.push_back(r);
        }
        
        cout << "Case " << i << ":\n";
        
        while(y--)
        {
            bool is_inside = false;
            cin >> yx >> yy;
            for(int i=0; i<routers.size(); i++)
            {
                int h = routers[i].first;
                int k = routers[i].second;
                int d = (h - yx)*(h - yx) + (k - yy)*(k - yy);
                
                if(d <= radius[i]*radius[i])
                {
                    is_inside = true;
                    break;
                }
            }
            if(is_inside)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        
        routers.clear();
        radius.clear();
    }

    return 0;
}