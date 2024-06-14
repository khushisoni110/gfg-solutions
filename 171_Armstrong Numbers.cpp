class Solution {
   public:
    string armstrongNumber(int n){
        int x=n,d=0;
        while(x) {
            d+=pow(x%10,3);
            x/=10;
        }
        if(d==n) return "true";
        return "false";
    }
};
