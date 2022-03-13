//O(2n) with extra space 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0 ;
        int j = 0 ; 
        int ans = 0 ; 
        unordered_map<char,int> last;
        unordered_map<char,int> vis;
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
//O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0 ;
        int j = 0 ; 
        int ans = 0 ; 
        unordered_map<char,int> last;
        for( ; j<n ;j++){
            if(last.count(s[j])){
                i = max(last[s[j]],i);
            }
            ans = max(ans,j-i+1);
            last[s[j]] = j+1;
        }
        return ans;
    }
};
