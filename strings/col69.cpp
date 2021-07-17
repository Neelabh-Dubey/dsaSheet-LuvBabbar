//Edit Word problem
class Solution{
public:
    int editDistance(string s, string t) {
        //int ans=INT_MAX;
        //count(s,t,0,0,ans,0);
        int n1=s.length(),n2=t.length();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(i==0 && j==0)dp[i][j]=0;
                else if(i==0)dp[i][j]=j;
                else if(j==0)dp[i][j]=i;
                else{
                    if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1];
                    else dp[i][j]=1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                }
            }
        }
        return dp[n1][n2];
    }

/* This is recursive approach
    Time Complexity = O(3^n) i.e. exponential

    void count(string s, string t, int idx1, int idx2, int& ans, int temp){
        if(idx1==s.length()){
            temp+=t.length()-s.length();
            ans=min(ans,temp);
            return;
        }
        if(idx2==t.length()){
            temp+=s.length()-t.length();
            ans=min(ans,temp);
            return;
        }
        if(s[idx1]==t[idx2])count(s,t,idx1+1,idx2+1,ans,temp);
        else{
            //replace
            count(s,t,idx1+1,idx2+1,ans,temp+1);
            //insert
            count(s,t,idx1,idx2+1,ans,temp+1);
            //delete
            count(s,t,idx1+1,idx2,ans,temp+1);
        }
        return;
    }
*/
};