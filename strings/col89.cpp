//Rearrangement of characters are possible such that no two repeated characters are adjacent

#include <iostream>
#include<vector>
using namespace std;

int solve(string s){
    vector<int>m(26,0);
    int x=0;
    for(char c:s){
        m[c-'a']++;
        x=max(m[c-'a'],x);
    }
    int n=s.length();
    return n+1>=2*x?1:0;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<solve(s)<<"\n";
	}
	return 0;
}