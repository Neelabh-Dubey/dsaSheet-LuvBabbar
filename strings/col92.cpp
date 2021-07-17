//Find smallest window in s containing all in p

class Solution{
public:
    string smallestWindow (string s, string p)
    {
        vector<int>mp(26,0),ms(26,0);
        int n1=s.length(),n2=p.length();
        if(n1<n2)return "-1";
        for(char c:p)mp[c-'a']++;
        int i=0,st,e,trkr=0,ans=INT_MAX;
        for(int j=0;j<n1;j++){
            if(mp[s[j]-'a']){
                if(ms[s[j]-'a']<mp[s[j]-'a'])trkr++;
                ms[s[j]-'a']++;
            }
            while(trkr==n2){
                if(j-i+1<ans){
                    st=i;
                    e=j;
                    ans=j-i+1;
                }
                if(ms[s[i]-'a']==0){}
                else if(ms[s[i]-'a']>mp[s[i]-'a']){
                    ms[s[i]-'a']--;
                }
                else{
                    ms[s[i]-'a']--;
                    trkr--;
                }
                i++;
            }
        }
        return ans==INT_MAX?"-1":s.substr(st,e-st+1);
    }
};