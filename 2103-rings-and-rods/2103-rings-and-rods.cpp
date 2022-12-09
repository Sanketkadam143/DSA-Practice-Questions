class Solution {
public:
    int countPoints(string rings) {
       vector<string>rods(10,"");
        set<char>temp;
        int ans=0;
        for(int i=1;i<rings.length();i+=2){
            rods[rings[i]-'0']+=rings[i-1];
        }
        for(int i=0;i<rods.size();i++){
            temp.clear();
            for(int j=0;j<rods[i].length();j++){
                temp.insert(rods[i][j]);
            }
            if(temp.size()==3)ans++;
        }

        return ans;
    }
};