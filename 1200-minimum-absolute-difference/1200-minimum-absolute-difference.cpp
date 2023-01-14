class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min=INT_MAX;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])<min)min=abs(arr[i]-arr[i-1]);
        }
      for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i + 1] - arr[i] == min)
            ans.push_back({arr[i], arr[i + 1]});
         }
      return ans;                                        
    }
};