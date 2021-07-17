//Transform one string into another using min operations
//Time complexity = O(n)
//Space Complexity = O(1)

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int minOps(string s1, string s2){
    int n1=s1.length(),n2=s2.length(),cnt=0;
    if(n1!=n2)return -1;
    vector<int>m(26,0);
    for(char c:s1)m[c-'a']++;
    for(char c:s2)m[c-'a']--;
    for(int i=0;i<26;i++){
        if(m[i]!=0)return -1;
    }
    int i=n1-1,j=n1-1;
    while(i>=0 && j>=0){
        if(s2[j]==s1[i]){
            i--;
            j--;
        }
        else{
            cnt++;
            i--;
        }
    }
    return cnt;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<minOps(s1,s2);
    return 0;
}