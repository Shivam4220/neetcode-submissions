class Solution {
public:
    int maxArea(vector<int>& heights) {
       int n=heights.size();
       int left=0;
       int right=n-1;
       int maxwater=INT_MIN;
       while(left<right){
        int area=min(heights[left],heights[right])* (right-left);
        if(heights[left]<heights[right]) left++;
        else right--;
        maxwater=max(maxwater,area);
       }
       return maxwater;

    }
};
