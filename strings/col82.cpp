//Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size(),k=0;
        for(char c:strs[0]){
            for(int i=1;i<n;i++){
                if(k==strs[i].size() || strs[i][k]!=c)return ans;
            }
            ans+=c;
            k++;
        }
        return ans;
    }
};