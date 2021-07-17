//Longest Repeating Subsequence
//Same as LCS with the difference is while filling dp we will cosider s[i]!=s[j] even if they are equal for i==j
//Time Complexity= O(n^2)
//Space Complexity= O(n^2)


int LongestRepeatingSubsequence(string str){
    int n=str.length();
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i!=j && str[i]==str[j])dp[i][j]=dp[i+1][j+1]+1;
            else dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
        }
    }
    return dp[0][0];
}