#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, di, dj, doublets = 0;
    bool yes=false;
    
    cin >> n;
    
    while(n--)
    {
        cin >> di >> dj;
        
        if(di == dj)
        {
            doublets++;
            if(doublets >= 3) yes=true;
        }
        else
        {
            doublets = 0;
        }
    }

    if(yes)
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}
