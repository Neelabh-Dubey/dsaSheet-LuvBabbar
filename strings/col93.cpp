//Remove consecutive occurences of same characters

//If we want to do it by using any data structure stack is the obivious choice 

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        int n=S.length();
        if(n==1)return S;
        string ans="";
        for(int i=0;i<S.length();i++){
            while(i+1<n && S[i]==S[i+1]){
                i++;
            }
            ans+=S[i];
        }
        return ans;
    }
};