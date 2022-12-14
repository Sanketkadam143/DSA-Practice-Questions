//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
         sort(a,a+n);
        sort(b,b+m);
        int count=0;
        int i=0, j=0;
        
        while(i<n && j<m)
        {
            if(i!=0 && a[i-1]==a[i])
            {
                i++;
            }else if(a[i]==b[j])
            {
                count++;
                i++;
                j++;
            }else if(a[i]<b[j])
            {
             i++;   
            }
            else{
                j++;
            }
        }
     return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends