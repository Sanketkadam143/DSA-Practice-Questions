// Count subsequence of given sum


#include <bits/stdc++.h>
using namespace std;

int subsequence(int index,  int requiredsum, int sum, int arr[],int n)
{
    if (index == n)
    {
        if (sum == requiredsum)
        {
           return 1;
        }
        return 0;
    }

   // take or pick the particular index into the sequence

   
    sum+=arr[index];
  
  int l=subsequence(index+1, requiredsum, sum, arr,n);

  sum-=arr[index];
  

 // not pick or not take condition,this element are not added to the sequence
 int r= subsequence(index+1,requiredsum, sum, arr,n);

 return l+r;



}

int main()
{
    int arr[]={1,2,1};
    int n=3;
    int requiredsum = 3;
   
   cout<< subsequence(0,  requiredsum, 0, arr,n);

    return 0;
}
