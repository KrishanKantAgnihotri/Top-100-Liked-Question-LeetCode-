//O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        map<int,int> m;
        m[v[0]] = 0 ; 
        for(int i = 1 ;i<v.size() ;i++){
            if(m.count(t-v[i])){
                return {i,m[t-v[i]]};
            }
            m[v[i]] = i;
        }
        return {0,0};
        
    }
};
//O(nlogn)
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        vector<pair<int,int>> arr;
        for(int i = 0 ;i<v.size() ;i++){
            arr.push_back({v[i],i});
        }
        sort(arr.begin(),arr.end());
        int i = 0 ; 
        int j = v.size()-1 ;
        while(i<j){
            int cur = arr[i].first+arr[j].first;
            if(cur == t){
                return {arr[i].second,arr[j].second};
            }
            else if(cur>t){
                j--;
            }
            else{
                i++;
            }
        }
        return {0,0};
        
    }
};
