class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int longestTime = 0;
        int hardestWorkerId = 0;
        int prevLeaveTime = 0;
        
        for (int i = 0; i < logs.size(); i++) {
            int currId = logs[i][0];
            int currLeaveTime = logs[i][1];
            int currTime = currLeaveTime - prevLeaveTime;
            
            if (currTime > longestTime) {
                longestTime = currTime;
                hardestWorkerId = currId;
            }
            else if (currTime == longestTime && currId < hardestWorkerId) {
                hardestWorkerId = currId;
            }
            
            prevLeaveTime = currLeaveTime;
        }
        
     return hardestWorkerId;
    }
};
