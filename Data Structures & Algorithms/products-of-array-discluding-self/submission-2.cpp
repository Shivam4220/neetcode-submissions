class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pro=1;
        bool flag=false;
        unordered_map<int,int>mp;
    
        for(auto it:nums){
            mp[it]++;
            if(it==0){
                flag=true;
                continue;
            }
            pro*=it;
            
        }

        vector<int> ans;
        if(mp[0]>1 ){
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
            return ans;
        }
        for(auto it : nums){
            if(flag==true && it!=0){
                ans.push_back(0);
                continue;
            }
            else if(it==0){
                ans.push_back(pro);
                continue;
            }
            int res=pro/it;
            ans.push_back(res);
        }
        return ans;
    }
};
