//Second most repeated string

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        string ans="",temp="";
        auto itr=m.begin();
        int mx,smx;
        mx=smx=INT_MIN;
        while(itr!=m.end()){
            if(itr->second>mx){
                smx=mx;
                mx=itr->second;
                ans=temp;
                temp=itr->first;
            }
            else if(itr->second>smx){
                smx=itr->second;
                ans=itr->first;
            }
            itr++;
        }
        return ans;
    }
};