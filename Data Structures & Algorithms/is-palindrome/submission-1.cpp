class Solution {
public:
    bool isPalindrome(string s) {
        bool flag=true;
        string ans="";
        for(int i=0;i<s.size();i++){
            if (!isalnum(s[i])) continue;
            else ans.push_back(tolower(s[i]));
        }
        int right=ans.size()-1;
        for(int i=0;i<ans.size()/2;i++){
            if(ans[i]!=ans[right]) flag = false;
            right--;
        }
        return flag;
    }
};
