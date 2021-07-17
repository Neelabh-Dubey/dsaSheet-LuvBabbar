//Minimum characters to be added at front to make string pallindrome

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int computingLps(string s){
    int n=s.length();
    vector<int>lps(n,0);
    int i=1,len=0;
    while(i<n){
        if(s[len]==s[i]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
                
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps.back();
}

int check(string s){
    int n=s.length();
    string str =s;
    reverse(s.begin(),s.end());
    vector<int>lps(n,0);
    int x=computingLps(str+"#"+s);
    return n-x;
}

int main(){
    string s;
    cin>>s;
    cout<<check(s);
    return 0;
}