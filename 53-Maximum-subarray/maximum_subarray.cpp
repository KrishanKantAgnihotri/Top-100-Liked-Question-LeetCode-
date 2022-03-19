//dynamic programming / intution 
//O(n)
class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int ans = *max_element(v.begin(),v.end());
        int cur = 0 ; 
        int sm = 0 ; 
        for(int i = 0 ;i<v.size() ;i++){
            cur+=v[i];
            if(cur<v[i])
                cur = v[i];
            // cout<<cur<<" ";
            ans = max(ans,cur);
        }
        return ans;
    }
};
