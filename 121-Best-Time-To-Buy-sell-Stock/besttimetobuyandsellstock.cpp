class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mn = v[0];
        int ans = 0 ; 
        for(int i = 0 ;i<v.size() ;i++){
            ans = max(ans,v[i]-mn);
            mn = min(mn,v[i]);
        }
        return ans;
    }
};
