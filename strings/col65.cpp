//All subsequences of given subsequences
//Below methods generate all possible subsequences. To get unique subsequences use set in place of vector

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;


/*Recursive Solution
  Time Complexity= Exponential O(2^n)

void print(string s, int idx, vector<string>&ans, string t){
    if(idx==s.length()){
        ans.push_back(t);
        return;
    }
    print(s,idx+1,ans,t+s[idx]);
    print(s,idx+1,ans,t);
    return;
}
*/

//Time Complexity= O(n*logn)
vector<string>print(string s){
    int n=s.length();
    int k=pow(2,n);
    vector<string>ans;
    for(int i=1;i<k;i++){
        int j=i,idx=0;
        string t="";
        while(j){
            if(j&1)t+=s[idx];
            j=j>>1;
            idx++;
        }
        ans.push_back(t);
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    vector<string>ans;
    //print(s,0,ans,"");
    vector<string>ans=print(s);
    for(string x:ans)cout<<x<<"\n";
    return 0;
}