class Solution {
  public:
      bool isPrime(int N){
          if(N<=1){
              return false;
          }
          for(int i=2;i<=sqrt(N);i++){
              if(N%i==0){
                  return false;
              }
          }
          return true;
      }
    vector<int> getPrimes(int N) {
        for(int i=2;i<=(N/2);i++){
            if(isPrime(i) && isPrime(N-i)){
                return {i,N-i};
            }
        }
        return {-1,-1};
    }
};
