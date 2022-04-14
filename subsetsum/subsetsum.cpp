// Print the sum of the subsets of the given list

#include <bits/stdc++.h>
using namespace std;

void func(int index, int arr[], int sum, vector<int> &ans, int &n)
{

    if (index == n)
    {    
        //  Adding the sum of subset to our list
        ans.push_back(sum);  

        return;
    }

    // condition to pick the elements
    func(index + 1, arr, sum + arr[index], ans, n);
   
//    condition to not pick the elements
    func(index + 1, arr, sum, ans, n);
}

vector<int> subsetsum(int arr[], int n)
{
    vector<int> ans;
    func(0, arr, 0, ans, n);

    // sorting the list as we required sum in increasing order
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int arr[] = {5,2,1};
    vector<int> sumset;
    int n = sizeof(arr) / sizeof(arr[0]);

    sumset = subsetsum(arr, n);
    for (auto it : sumset)
    {
        cout << it << " ";
    }

    return 0;
}