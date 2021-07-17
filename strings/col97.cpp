//Isomorphic String

class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int n1=str1.length(),n2=str2.length();
        if(n1!=n2)return false;
        //unordered_map<char,char>m;
        //vector<bool>unq(26,false);
        char m[26];
        bool unq[26];
        memset(m,'#',sizeof(m));
        memset(unq,false,sizeof(unq));
        for(int i=0;i<n1;i++){
            if(m[str1[i]-'a']=='#'){
                if(unq[str2[i]-'a'])return false;
                unq[str2[i]-'a']=true;
                m[str1[i]-'a']=str2[i];
            }
            else{
                if(m[str1[i]-'a']!=str2[i])return false;
            }
        }
        return true;
    }
};