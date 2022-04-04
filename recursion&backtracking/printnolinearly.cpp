#include <bits/stdc++.h>
using namespace std;

void func(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        cout <<i<< "\n";
             
        func(i + 1, n);
    }
}

int main()
{
    int n;
    cin >> n;

    func(1, n);

    return 0;
}