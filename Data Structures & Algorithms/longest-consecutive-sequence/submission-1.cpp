class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n=nums.size();
      if(n==0 || n==1) return n;
      unordered_set<int> mp;
      for(auto it : nums){
        mp.insert(it);
      } 
      int res=INT_MIN; 
      int ans=0;
      for(int i=0;i<n;i++){
        if(mp.find(nums[i]-1)!=mp.end()) continue;
        else{
            while(mp.find(nums[i])!=mp.end()){
                ans++;
                nums[i]+=1;

            }
            res=max(ans,res);
            ans=0;
        }
      }
      return res;
    }
};
