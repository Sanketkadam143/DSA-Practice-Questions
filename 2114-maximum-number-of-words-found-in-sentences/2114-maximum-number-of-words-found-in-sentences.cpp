/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
   
    var ans=0;
    var s='';
    for(let i=0; i< sentences.length;i++){
        s=sentences[i];
        let count=1;
        for(let j=0;j<s.length;j++){
            s[j]===" " && count++;
            count>ans && (ans=count);
        }
    }
    
    return ans;
};