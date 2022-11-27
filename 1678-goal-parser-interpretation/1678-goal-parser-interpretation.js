/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    var ans='';
    for(let i=0;i< command.length;i++){
      if ( command[i]==='('&& command[i+1]===')' ){
          ans+='o';
          i++;
      }
     else if(command[i]==='(' && command[i+1]==='a' && command[i+2]==='l' && command[i+3]===')'){
        ans+='al';
        i+=3;
    }else{
        ans+=command[i];
    }
    } 
    return ans;
};