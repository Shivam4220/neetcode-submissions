class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       sort(stones.begin(),stones.end());
       int n=stones.size();
       if(n==1) return stones[0];
       if(n==2) return stones[1]-stones[0];
       while(stones[n-2]!=0){
        if(stones[n-1]==stones[n-2]){
            stones[n-2]=0;
            stones[n-1]=0;
        }
        
        else{
            
            stones[n-1]-=stones[n-2];
            stones[n-2]=0;
        }
        sort(stones.begin(),stones.end());
       } 
       return stones[n-1];
    }
};
