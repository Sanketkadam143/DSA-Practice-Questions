class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto& str:arr){
            mp[str]++;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                count++;
                if(count==k)return arr[i];
            }
        }
      return "";
    }
};