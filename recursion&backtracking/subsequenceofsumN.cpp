// Subsequence of the given sum

#include <bits/stdc++.h>
using namespace std;

void subsequence(int index, vector<int> &output, int requiredsum, int sum, int arr[],int n)
{
    if (index == n)
    {
        if (sum == requiredsum)
        {
            for (auto it : output)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
   // take or pick the particular index into the sequence

    output.push_back(arr[index]);
    sum+=arr[index];
  
  subsequence(index+1, output, requiredsum, sum, arr,n);

  sum-=arr[index];
  output.pop_back();

 // not pick or not take condition,this element are not added to the sequence
  subsequence(index+1, output, requiredsum, sum, arr,n);



}

int main()
{
    int arr[]={1,2,1};
    int n=3;
    int requiredsum = 4;
    vector<int> output;
    subsequence(0, output, requiredsum, 0, arr,n);

    return 0;
}
