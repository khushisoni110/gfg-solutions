class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        vector<int> b(n,1);
        int ans=0;
        if(n==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(abs(a[i]-a[j])==1){
                    b[i]=max(b[i],1+b[j]);
                    ans=max(ans,b[i]);
                }
            }
        }
        return ans;
    }
};
