class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       map<int,int>map;
       for(auto& it:candyType)map[it]++;
       return min(map.size(),candyType.size()/2);
    }
};