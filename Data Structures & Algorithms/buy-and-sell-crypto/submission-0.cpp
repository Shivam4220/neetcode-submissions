class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      int maxpro=INT_MIN;
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int res=prices[j]-prices[i];
            if(res>maxpro) maxpro=res;
        }
      }  
      if(maxpro<=0) return 0;
      else return maxpro;
    }
};
