class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int high=letters.size()-1,low=0;
        int mid=low + (high-low)/2;
        char let=letters[0];
        while(low<=high){
            mid=low + (high-low)/2;
            if(target<letters[mid]){
                let=letters[mid];
                high=mid-1;
              
            }else{
                  low=mid+1;
            }
        }
        return let; 
    }
};