#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double x;
    long long int distance;
    vector<int> v, v_abs;

    cin >> n;

    while(n--)
    {
        cin >> x;
        v.push_back(x);
    }

    distance=0;
    for(int i=0; i<v.size(); i++)
    {
        int abs_x = abs(v[i]);
        distance += abs_x;
        v_abs.push_back(abs_x);
    }
    cout << distance << endl;

    distance=0;
    for(int i=0; i<v.size(); i++)
        distance += pow(v_abs[i], 2);
    printf("%.10f\n", sqrt(distance));

    int it = *max_element(v_abs.begin(), v_abs.end());
    cout << it << endl;

    return 0;
}