//Word Break problem

/* Recursive Approach

int recurse(string str, unordered_set<string>&s){
    if(str.length()==0)return 1;
    for(int i=0;i<str.length();i++){
        string t=str.substr(0,i+1);
        if(s.count(t)){
            if(recurse(str.substr(i+1),s))return 1;
        }
    }
    return 0;
}
*/

//DP based approach
//Time Complexity= O(n^2)
//Space Complexity= O(n)

int wordBreak(string A, vector<string> &B) {
    unordered_set<string>s;
    for(string x:B)s.insert(x);
    //return recurse(A,s);
    int n=A.length();
    vector<bool>dp(n+1,false);
    dp[0]=true;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            dp[i]=dp[i]||(s.count(A.substr(j-1,i-j+1))&&dp[j-1]);
        }
    }
    return dp[n]?1:0;
}