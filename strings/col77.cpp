//Count pallindromic subsequences in a given string, return answer in modulo of 1e9+7
//Time Complexity = O(n^2)
//Space Complexity = O(n^2)

class Solution{
public:
    long long int  countPS(string str)
    {
       long long mod=1e9+7;
       int n=str.length();
       vector<vector<long long>>dp(n,vector<long long>(n,0));
       for(int g=0;g<n;g++){
           for(int i=0,j=g;j<n;j++,i++){
               if(g==0)dp[i][j]=1;
               else if(g==1){
                   if(str[i]==str[j])dp[i][j]=3;
                   else dp[i][j]=2;
               }
               else{
                   if(str[i]==str[j])dp[i][j]=(dp[i+1][j]+dp[i][j-1])%mod+1;
                   else dp[i][j]=((dp[i+1][j]+dp[i][j-1])%mod-dp[i+1][j-1]+mod)%mod;
               }
               dp[i][j]%=mod;
           }
       }
       return dp[0][n-1];
    }
};