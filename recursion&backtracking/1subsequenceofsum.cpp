// Only one Subsequence of the given sum

#include <bits/stdc++.h>
using namespace std;

bool subsequence(int index, vector<int> &output, int requiredsum, int sum, int arr[],int n)
{
    if (index == n){
    //  condition satisfied
        if (sum == requiredsum)
        {
            for (auto it : output)
                cout << it << " ";
            cout << endl;
            return true;
        }
        // condition not satisfied
        else return false;
    }
   // take or pick the particular index into the sequence

    output.push_back(arr[index]);
    sum+=arr[index];
  
 if(subsequence(index+1, output, requiredsum, sum, arr,n)==true){
     return true;
 }

  sum-=arr[index];
  output.pop_back();

 // not pick or not take condition,this element are not added to the sequence
  if(subsequence(index+1, output, requiredsum, sum, arr,n)==true){
      return true;
  }

  else{ 
      return false;
  }

}

int main()
{
    int arr[]={1,2,1};
    int n=3;
    int requiredsum = 3;
    vector<int> output;
    subsequence(0, output, requiredsum, 0, arr,n);

    return 0;
}
