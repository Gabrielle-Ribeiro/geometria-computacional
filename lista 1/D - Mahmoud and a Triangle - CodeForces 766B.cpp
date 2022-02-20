#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int a;
    vector<long long int> v;
    
    cin >> n;
    
    while(n--)
    {
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i < v.size(); i++)
    {
        for(int j=i+2; j < v.size(); j++)
        {
            if((v[i]+v[i+1]) > v[j] && (v[i]+v[j]) >= v[i+1] && (v[i+1]+v[j]) >= v[i])
            {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
