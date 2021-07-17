//Smallest window with all chars 

class Solution{
public:
    string findSubString(string s)
    {
        int sz=s.size();
        if(sz==1)return s;
        vector<int>ms(256,0);
        unordered_set<char>p;
        for(char c:s)p.insert(c);
        int trkr=0,st=0,e=sz-1,i=0,n=p.size(),ans=sz;
        for(int j=0;j<sz;j++){
            if(ms[s[j]]==0)trkr++;
            ms[s[j]]++;
            while(trkr==n){
                if(ans>j-i+1){
                    ans=j-i+1;
                    st=i;
                    e=j;
                }
                if(ms[s[i]]==1)trkr--;
                ms[s[i]]--;
                i++;
            }
        }
        return s.substr(st,e-st+1);
    }
};