#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, a, b, shots = 0;
    vector<pair<int, int> > stormtroopers;
    vector<bool> alive;
    
    cin >> n >> x >> y;
    
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        stormtroopers.push_back(make_pair(a, b));
        alive.push_back(true);
    }
    
    for(int i=0; i<n; i++)
    {
        if(!alive[i])
            continue;
        
        pair<int, int> current_trooper(stormtroopers[i].first - x, stormtroopers[i].second - y);
        
        for(int j=0; j<n; j++)
        {
            pair<int, int> unlucky_trooper(stormtroopers[j].first - x, stormtroopers[j].second - y);
            if(current_trooper.first * unlucky_trooper.second == current_trooper.second * unlucky_trooper.first)
                alive[j] = false;
        }
        
        shots++;
    }

    cout << shots << endl;

    return 0;
}
