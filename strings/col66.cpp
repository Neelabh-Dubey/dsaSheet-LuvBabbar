//Generate permutations of a string

class Solution{
public:
    vector<bool>vis;
	vector<string>find_permutation(string S)
	{
	    int n=S.length();
	    sort(S.begin(),S.end());
	    vis.resize(n,false);
        vector<string>ans;
        permutation(S,"",ans,n);
        return ans;
	}
	void permutation(string s, string t, vector<string>&ans, int n){
	    if(t.length()==n){
	        ans.push_back(t);
	        return;
	    }
	    for(int i=0;i<n;i++){
	       if(!vis[i]){
	           vis[i]=true;
	           permutation(s,t+s[i],ans,n);
	           vis[i]=false;
	       } 
	    }
	}
};