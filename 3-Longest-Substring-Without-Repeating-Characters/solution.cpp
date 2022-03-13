class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0 ;
        int j = 0 ; 
        int ans = 0 ; 
        map<char,int> last;
        map<char,int> vis;
        for( ; j<n ;j++){
            if(vis[s[j]]){
                int id = last[s[j]];
                while(i<=id){
                    vis[s[i]] = false;
                    i++;
                }
                
                i = id+1;
                
            }
                vis[s[j]] = true;
            last[s[j]] = j ;
            ans = max(ans,j-i+1);
            // cout<<j<<" "<<i<<",";
        }
        // cout<<endl;
        j--;
        ans = max(ans,j-i+1);
        return ans;
    }
};
