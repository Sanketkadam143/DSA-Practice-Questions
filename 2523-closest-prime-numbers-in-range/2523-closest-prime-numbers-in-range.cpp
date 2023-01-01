class Solution {
public:
     bool isprime(int num){
           if(num==0||num==1)return false;
           for(int i=2;i<=sqrt(num);i++){
               if(num%i==0)return false;
           }
           return true;
       }
    vector<int> closestPrimes(int left, int right) {
       vector<int>primes,ans={-1,-1};
        for(int i=left;i<=right;i++){
            if(isprime(i))primes.push_back(i);
        }
     if(primes.size()==1||primes.empty())return ans;
      int min=INT_MAX,minIndex=1;
      for(int i=1;i<primes.size();i++){
          if(primes[i]-primes[i-1]<min){
             min=primes[i]-primes[i-1];
             minIndex=i;
          }
      }
     ans[0]=primes[minIndex-1];
     ans[1]=primes[minIndex];   
     return ans;
    }
};