#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;

    int s_len = s.size();
    int t_len = t.size();
    int equals = 0;
    int max_equals = 0;

    for(int i=0; i <= s_len-t_len; i++)
    {
        int j=i;
        int k=0;

        for(;k < t_len;)
        {
            if(s[j++] == t[k++])
            {
                equals++;
            }
        }

        if(max_equals < equals) max_equals = equals;

        equals = 0;
    }

    cout << t_len - max_equals << endl;

    return 0;
}