//To check string s2 is rotated version of string s1;

#include<iostream>
#include<string>

using namespace std;


/* Brute Force Approach
   Time Complexity= O(n^2)

void areRotated(string s1, string s2){
    int n=s1.length();
    for(int i=0;i<s2.length();i++){
        char c=s2[i];
        if(c==s1[0]){
            int k=i,j=0;
            for(;j<n;j++,k++){
                if(c!=s2[k%n])break;
            }
            if(j==n){
                cout<<"Strings are rotated\n";
                return;
            }
        }
    }
    cout<<"Strings are not rotated\n";
    return;
}
*/


// Time Complexity O(n) assuming string matching find() is implemented using KMP Algo.
void areRotated(string s1,string s2){
    string s=s1+s1;
    if(s.find(s2)!=string::npos)cout<<"Strings are rotated\n";
    else cout<<"Strings are not rotated\n";
    return;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"Strings are not rotated\n";
        return 0;
    }
    areRotated(s1,s2);
    return 0;
}