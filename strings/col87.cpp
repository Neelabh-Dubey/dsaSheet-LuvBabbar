//Generating valid paranthesis


//Recursive Approach
//Exponential Time Complexity
#include<iostream>
using namespace std;

void print(string s, string t, int r){
    if(r==-1){
        if(s.length()==0)cout<<t.substr(0,t.length()-1)<<"\n";
        return;
    }
    if(s.length()==0)return;
    if(s.length()>=1)print(s.substr(1),t+s.substr(0,1)+".",r-1);
    string temp=s.substr(0,2);
    if(s.length()>=2&&(temp[0]!='0'||(temp[0]=='0'&& temp[1]=='0')))print(s.substr(2),t+s.substr(0,2)+".",r-1);
    temp=s.substr(0,3);
    if(s.length()>=3&&(temp[0]!='0'||(temp[0]=='0'&& temp[1]=='0'&&temp[2]=='0'))&&stoi(temp)<=255)print(s.substr(3),t+temp+".",r-1);
    return;
}

int main(){
    string s;
    cin>>s;
    int n=s.length();
    if(n<4 || n>12)cout<<"No valid IPs";
    string temp=s.substr(0,1);
    print(s.substr(1),temp+".",2);
    temp=s.substr(0,2);
    if(temp[0]!='0'||(temp[0]=='0'&& temp[1]=='0'))print(s.substr(2),temp+".",2);
    temp=s.substr(0,3);
    if(stoi(temp)<=255)print(s.substr(3),temp+".",2);
    return 0;
}