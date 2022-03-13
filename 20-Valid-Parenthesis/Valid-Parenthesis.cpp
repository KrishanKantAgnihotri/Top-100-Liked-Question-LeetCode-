//O(n)
class Solution {
public:
    int check(char c){
        if(c=='(' || c=='[' || c=='{') return 1;
        return 0;
    }
    char conv(char c){
        if(c == ')') return '(';
        if(c == ']') return '[';
         return '{';
    }
    bool isValid(string s) {
       
        int n = s.length();
        stack<char> st;
        for(int i = 0 ;i<n; i++){
            if(check(s[i])){
                st.push(s[i]);
            }
            else{
                if(st.size()>0 && st.top() == conv(s[i])){
                    st.pop();
                }
                else 
                    return false;
            }
        }
        return !(st.size());
    }
};
