class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<numbers.size();i++){
            int diff=target-numbers[i];
            if(mp.find(diff)!=mp.end()){
                ans.push_back(mp[diff]+1);
                ans.push_back(i+1);
            }
            else{
                mp[numbers[i]]=i;
            }
        }
        return ans;
    }
};
