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
       std::set<int> set1, set2,intersection;
         for (int i = 0; i < n; i++) {
            set1.insert(a[i]);
        }

       
        for (int i = 0; i < m; i++) {
            set2.insert(b[i]);
        }
        std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::inserter(intersection, intersection.begin()));
     return intersection.size();
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