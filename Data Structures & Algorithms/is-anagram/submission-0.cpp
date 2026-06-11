class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size() ) return false;
        unordered_map<char,int> mp;
        unordered_map<char,int> p;
        for(auto it: s){
            mp[it]++;
        }
        for(auto it : t){
            p[it]++;
        }
        if(mp==p) return true;
        return false;
    }
};
