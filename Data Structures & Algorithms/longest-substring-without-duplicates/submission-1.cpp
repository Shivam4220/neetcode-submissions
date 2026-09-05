class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int maxlen=0;
      int n=s.size();
      if(n==0) return 0;
      int left=0;
      int ans=-1;
      unordered_set<char> st;

    
      for(int right=0;right<n;right++){
        if(st.find(s[right])!=st.end()){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
        }
        else{
           st.insert(s[right]); 
        }
        ans=max(ans,right-left+1);
      }
      return ans;
    }
};
