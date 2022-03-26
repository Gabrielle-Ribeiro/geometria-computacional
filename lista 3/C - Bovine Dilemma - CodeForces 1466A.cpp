#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, xi;
    vector<int> x;
    set<double> areas;

    cin >> t;

    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> xi;
            x.push_back(xi);
        }

        for(int i=0; i<n; i++)
        {
            int c1 = 1;
            int c2 = x[i];
            double hip_x1 = sqrt(c1*c1 + c2*c2);

            for(int j=i+1; j<n; j++)
            {
                c2 = x[j];
                double hip_x2 = sqrt(c1*c1 + c2*c2);

                int base = x[j] - x[i];

                if(base <= hip_x1+hip_x2 && hip_x1 <= base+hip_x2 && hip_x2 <= base+hip_x1 && base*1.0/2 > 0)
                {
                    areas.insert(base*1.0/2);
                }
            }
        }
        cout << areas.size() << endl;

        x.clear();
        areas.clear();
    }
    
    return 0;
}