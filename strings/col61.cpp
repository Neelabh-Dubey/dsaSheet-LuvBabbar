#include<iostream>
#include<string>
#include<algorithm>
//#include<map>

using namespace std;

/* Map  based approach
   Time Complexity is Linear

void validShuffle(string s1, string s2, string s){
    if(s.length()!=s1.length()+s2.length()){
        cout<<"Not valid shuffle\n";
        return;
    }
    map<char,int>m,mp; //map m for characters in s1 and s2, map mp for characters in s;
    // map is deliberately choosed in place of unordered_map because that reduces time complexity while comparison in map m and map mp;
    for(char c:s1)m[c]++;
    for(char c:s2)m[c]++;
    for(char c:s)mp[c]++;
    if(m.size()!=mp.size()){
        cout<<"Not valid shuffle\n";
        return;
    }
    auto itr1=m.begin(),itr2=mp.begin();
    while(itr1!=m.end()){
        if(itr1->first!=itr2->first || itr1->second!=itr2->second){
            cout<<"Not valid shuffle\n";
            return;
        }
        itr1++;
        itr2++;
    }
    cout<<"Valid Shuffle\n";
    return;
}
*/
// Time Complexity= O(nlogn)
void validShuffle(string s1,string s2, string s){
    if(s.length()!=s1.length()+s2.length()){
        cout<<"Not valid shuffle\n";
        return;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s.begin(),s.end());
    int i=0,j=0,k=0;
    while(k<s.length()){
        if(i<s1.length() && s[k]==s1[i])i++;
        else if(j<s2.length() && s[k]==s2[j])j++;
        else{
            cout<<"Not valid shuffle\n";
            return;
        }
        k++;
    }
    cout<<"Valid Shuffle\n";
    return;    
}

int main(){
    string s1,s2,s;  //to check on string s
    cin>>s1>>s2>>s;
    validShuffle(s1,s2,s);
    return 0;
}