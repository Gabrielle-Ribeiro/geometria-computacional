#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, c, d;
    
    cin >> a >>  b >>  c >> d;
    long long int max = a*c;
    
    if(max < a*d) max = a*d;
    if(max < b*c) max = b*c;
    if(max < b*d) max = b*d;

    cout << max << endl;
    
    return 0;
}