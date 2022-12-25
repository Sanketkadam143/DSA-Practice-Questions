class Solution {
public:
    int ans=0;
    void captured(vector<int>forts){
       bool flag=false;
       int counter=0;
        for(int i=0;i<forts.size();i++){
           if(forts[i]==1){
               flag=true;
               counter=0;
           }
           if(flag&&forts[i]==0)counter++;
           if(forts[i]==-1&& flag){
               ans=max(ans,counter);
              flag=false;
               }
        }
    }
    int captureForts(vector<int>& forts) {
       captured(forts);
       reverse(forts.begin(),forts.end());
       captured(forts);
       return ans;
    }
};