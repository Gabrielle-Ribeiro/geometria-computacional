#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2, a3, a4, a5, a6, t=0, depth;
    
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;

    depth = a1 + a2 + a3 - 1;
    for(int i=0; i<=depth; i++)
        t += 2 * i + 1;
    
    depth = a1 - 1;
    for(int i=0; i<=depth; i++)
        t -= 2 * i + 1;
    
    depth = a3 - 1;
        for(int i=0; i<=depth; i++)
        t -= 2 * i + 1;
    
    depth = a5 - 1;
    for(int i=0; i<=depth; i++)
        t -= 2 * i + 1;
    
    cout << t << endl;

    return 0;
}
