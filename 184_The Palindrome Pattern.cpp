class Solution {
  public:
    string pattern(vector<vector<int>> &arr) {
        string ans = "";
        for(int i=0;i<arr.size();i++){
            int k1 = 0,k2 = arr[0].size()-1;
            bool f = true;
            while(k1 <= k2){
                if(arr[i][k1]!=arr[i][k2]){
                    f=false;
                    break;
                }
                k1++;
                k2--;
            }
            if(f){
                ans += to_string(i);
                ans += " R";
                return ans;
            }
        }
        for(int j=0;j<arr[0].size();j++){
            int k1 = 0,k2 = arr.size()-1;
            bool f = true;
            while(k1 <= k2){
                if(arr[k1][j]!=arr[k2][j]){
                    f = false;
                    break;
                }
                k1++;
                k2--;
            }
            if(f){
                ans += to_string(j);
                ans += " C";
                return ans;
            }
        }
        return "-1";
    }
};
