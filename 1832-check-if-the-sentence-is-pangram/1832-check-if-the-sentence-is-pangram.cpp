class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(),sentence.end());
        string alpha="abcdefghijklmnopqrstuvwxyz";
        bool isfound;
        for(int i=0;i<alpha.length();i++){
            isfound=false;
            for(int j=0;j<sentence.length();j++){
                if(alpha[i]==sentence[j]) isfound=true;
            }
             if(isfound==false) return false;
        }
        
        return true;
    }
};