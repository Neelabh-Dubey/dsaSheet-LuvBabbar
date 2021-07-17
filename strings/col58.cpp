//Count duplicates
//Time Complexity O(n)

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

void count(string s){
    unordered_map<char,int>m;
    for(char c:s){
        m[c]++;
    }
    for(auto x:m){
        if(x.second>1)cout<<"character- "<<x.first<<" count: "<<x.second<<"\n";
    }
    return;
}

int main(){
    string s;
    getline(cin,s);
    count(s);
    return 0;
}