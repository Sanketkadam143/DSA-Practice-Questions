class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans=0,n=startTime.size();
        for(int i=0;i<n;i++){
            if(startTime[i]<=queryTime && endTime[i]>=queryTime)ans++;
        }
        return ans;
    }
};