class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<int>temp;
        int n=image.size();
        for(int i=0;i<n;i++){
            temp=image[i];
            reverse(temp.begin(),temp.end());
            for(int j=0;j<n;j++){
              if(temp[j]==0){
                  temp[j]=1;
              }else{
                  temp[j]=0;
              }  
            }
            image[i]=temp;
        }
        return image;
    }
};