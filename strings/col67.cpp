//Split the binary string into substrings with equal zeros and ones
//Time Complexity- O(n);
//Space Complexity- O(1);


#include<iostream>
#include<string>
using namespace std;

int count(string s){
    int cnt=0,k=0;
    for(char c:s){
        if(c=='0')k--;
        else k++;
        if(k==0)cnt++;
    }
    return cnt==0?-1:cnt;
}

int main(){
    string s;
    cin>>s;
    int cnt=count(s);
    cout<<cnt<<"\n";
    return 0;
}