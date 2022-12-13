//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       string ans="",temp="";
       for(int i=S.length();i>=0;i--){
            temp+=S[i];
           if(S[i]=='.'||i==0){
               if(i==0){
               reverse(temp.begin(),temp.end());
               }else{
                    reverse(temp.begin(),temp.end()-1);
               }
               ans+=temp;
               temp="";
           }
       }
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends