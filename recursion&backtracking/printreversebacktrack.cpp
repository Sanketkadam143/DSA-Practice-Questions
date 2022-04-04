// printing numbers in reverse order using backtracking

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

        func(i + 1, n);
        cout << i << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    func(1, n);

    return 0;
}