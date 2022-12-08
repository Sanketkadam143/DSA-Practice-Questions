class Solution {
public:
    string decodeMessage(string key, string message) {
        string alpha="abcdefghijklmnopqrstuvwxyz";
        string newKey="",ans="";
        bool isfound=false;
        for(int i=0;i<key.length();i++){
            isfound=false;
            for(int j=0;j<newKey.length();j++){
                if(key[i]==newKey[j]){
                    isfound=true;
                    break;
                }
            }
            if(!isfound&&key[i]!=' ')newKey+=key[i];
        }
        for(int i=0;i<message.length();i++){
            for(int j=0;j<newKey.length();j++){
                if(message[i]==newKey[j]){
                    ans+=alpha[j];
                    break;
                }
            }
            if(message[i]==' ')ans+=' ';
        }
        return ans;
    }
};