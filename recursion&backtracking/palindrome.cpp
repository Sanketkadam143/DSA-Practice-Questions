#include <bits/stdc++.h>
using namespace std;

bool   pal(string s, int i)
{
    if (i >= s.length() / 2){
        return true;
    }
        
    if (s[i] != s[s.length() - i - 1])
    {

        return false;
    }
    else
    {
        return pal(s, i + 1);
    }
}

int main()
{
    string s;

    cin >> s;

    cout<<pal(s, 0);
    
    return 0;
}