// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    public:
    void func(int index, vector<int> &arr, int sum, vector<int> &ans, int &N)
{

    if (index == N)
    {
        ans.push_back(sum);
        return;
    }

    func(index + 1, arr, sum + arr[index], ans, N);
    

    func(index + 1, arr, sum, ans, N);
}

public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<int> ans;
    func(0, arr, 0, ans, N); 
   
    return ans;
}
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends