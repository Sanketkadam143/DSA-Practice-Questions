//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
       if(N==1)return arr[0];
        int minLen=arr[0].length();
        for(int i=1;i<N;i++){
            minLen=min(minLen,(int)arr[i].length());
        }
        string prefix="";
        for(int i=0;i<minLen;i++){
            char c=arr[0][i];
            for(int j=0;j<N;j++){
                if(arr[j][i]!=c){
                    if(prefix.empty()){
                       return "-1";  
                    }else{
                       return prefix;
                    }
                }
            }
            prefix+=c;
        }
        if(prefix.empty())return "-1";
     
        return prefix;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends