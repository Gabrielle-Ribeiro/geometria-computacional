#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;
    vector<pair<int, int> > brownies;
    
    while(cin >> n, n != 0)
    {
        int middle_point = n/2;
        
        while(n--)
        {
            cin >> x >> y;
            brownies.push_back(make_pair(x, y));
        }
        
        int ollie_score = 0, stan_score = 0;
        
        x = brownies[middle_point].first;
        y = brownies[middle_point].second;
        
        for(int i=0; i<brownies.size(); i++)
        {
            if(brownies[i].first > x && brownies[i].second > y)
                stan_score++;
            else if(brownies[i].first > x && brownies[i].second < y)
                ollie_score++;
            else if(brownies[i].first < x && brownies[i].second > y)
                ollie_score++;
            else if(brownies[i].first < x && brownies[i].second < y)
                stan_score++;
        }
        
        cout << stan_score << " " << ollie_score << endl;
        
        brownies.clear();
    }

    return 0;
}
