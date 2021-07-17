//Leetcode countandsay
// Recursive approach
// Time Complexity= O(n*l)  ; where l will be length of string formed in countandsay process

class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        if(n==2)return "11";
        string s=countAndSay(n-1);
        int cnt=1;
        string ans="";
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1])cnt++;
            else{
                ans+=to_string(cnt)+s[i-1];
                cnt=1;
            }
            if(i==s.length()-1)ans+=to_string(cnt)+s[i];
        }
        return ans;
    }
};