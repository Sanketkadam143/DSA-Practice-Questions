/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var truncateSentence = function(s, k) {
    var count=1;
    var result;
    const len=s.length
    
    for(let i=0;i<=len;i++){
       
        if(count===k &&( s[i]===' '|| i ===s.length)) {
          result= s.slice(0,i);
        }
        if(s[i]===' '){
            count++;
        }
        
        
    }
    return result;
};