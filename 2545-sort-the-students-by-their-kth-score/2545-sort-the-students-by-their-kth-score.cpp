class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int>temp;
        for(int i=0;i<score.size();i++){
            for(int j=0;j<score.size()-1;j++){
                if(score[j][k]<score[j+1][k]){
                    temp=score[j];
                    score[j]=score[j+1];
                    score[j+1]=temp;
                }
            }
        }
        return score;
    }
};