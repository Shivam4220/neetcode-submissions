// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int n=nums.size();
//         unordered_map<int,int> mp;
//         for(auto it : nums){
//             mp[it]++;
//         }
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n;j++){
//                 int no=nums[i]+nums[j];
//                 if(mp.find(-no)!=mp.end()){
//                     vector<int> res;
//                     res.push_back(nums[i]);
//                     res.push_back(nums[j]);
//                     res.push_back(-no);
//                     ans.push_back(res);
//                 }
//             }
//         }

//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {

            unordered_set<int> mp;

            for(int j = i + 1; j < n; j++) {

                int third = -(nums[i] + nums[j]);

                if(mp.find(third) != mp.end()) {

                    vector<int> res = {
                        nums[i],
                        nums[j],
                        third
                    };

                    sort(res.begin(), res.end());

                    ans.insert(res);
                }

                mp.insert(nums[j]);
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end());
    }
};
