//To find longest pallindromic substring
//Time Complexity= O(n^2)
//Space Complexity= O(n^2)
//created 2D dp filled with possible pallindrome then find out longest pallindrome and index of its first occurence 


class Solution {
public:
    string longestPalin (string S) {
        int n=S.length();
        vector<vector<bool>>dp(n,vector<bool>(n,false));
        int l=0;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0)dp[i][j]=true;
                else if(g==1){
                    if(S[i]==S[j])dp[i][j]=true;
                }
                else{
                    if(S[i]==S[j] && dp[i+1][j-1])dp[i][j]=true;
                }
                if(dp[i][j] && l<g)l=g;
            }
        }
        for(int i=0,j=l;j<n;i++,j++){
            if(dp[i][j]){
                return S.substr(i,l+1);
            }
        }
        return "";
    }
};