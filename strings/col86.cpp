//Longest Common Subsequence
//Time Complexity = O(n^2)
//Space Complexity = O(n^2)

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s1[i]==s2[j])dp[i][j]=dp[i+1][j+1]+1;
                else dp[i][j]=max(dp[i][j+1],dp[i+1][j]);
            }
        }
        return dp[0][0];
    }
};