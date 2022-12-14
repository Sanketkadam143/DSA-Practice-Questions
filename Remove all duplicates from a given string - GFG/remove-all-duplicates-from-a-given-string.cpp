//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	   string ans="";
	   bool isdup=false;
	   for(int i=0;i<str.length();i++){
	       isdup=false;
	       for(int j=0;j<ans.length();j++){
	           if(str[i]==ans[j]){
	             isdup=true;
	             break;
	           }
	       }
	       if(!isdup)ans+=str[i];
	   }
	   return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends