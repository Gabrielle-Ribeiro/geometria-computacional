#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x0, y0, x1, y1, x2, y2;
    
    cin >> x0 >> y0;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    cout << "3" << endl;
    cout << (x0 - x2) + x1 << " " << (y0 - y2) + y1 << endl;
    cout << (x2 - x1) + x0 << " " << (y2 - y1) + y0 << endl;
    cout << (x1 - x0) + x2 << " " << (y1 - y0) + y2 << endl;

    return 0;
}