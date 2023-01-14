class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min=INT_MAX;
        vector<vector<int>>ans;
        map<int,int>mp;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])<min)min=abs(arr[i]-arr[i-1]);
        }
        for(auto& num:arr)mp[num]++;
        for(auto& map:mp){
            if(mp.count(map.first+min))ans.push_back({map.first,map.first+min});
        }
      return ans;                                        
    }
};