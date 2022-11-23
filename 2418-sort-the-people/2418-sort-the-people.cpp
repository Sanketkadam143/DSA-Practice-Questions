class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int temp=0;
        string s="";
        for(int i=0;i<heights.size();i++){
            for(int j=i;j<heights.size();j++){
                if(heights[i]<heights[j]){
                    temp=heights[i];
                    s=names[i];
                    heights[i]=heights[j];
                    heights[j]=temp;
                    names[i]=names[j];
                    names[j]=s;
                }
            }
        }
        
        return names;
    }
};