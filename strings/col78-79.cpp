//problem 78 and 79 are similar. This is solution for 79 that is search

//Searching string in a 2D matrix in all 8 directions
//Time Complexity = O(m*n*k*8)
//Space Complexity = O(1)


//For problem 78 that is to count- simply create a counter variable increment it in place of returning when flag = true 

class Solution{
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    int n=grid.size(),m=grid[0].size();
	    vector<vector<int>>ans;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==word[0]){
	                if(bfs(i,j,grid,n-1,m-1,word))ans.push_back({i,j});
	            }
	        }
	    }
	    return ans;
	}
	bool bfs(int i,int j,vector<vector<char>>&grid,int r, int c, string s){
	    int n=s.length();
	    //horizontal right
	    if(j+n-1<=c){
	        bool flag=true;
	        int k=n,p=j,q=0;
	        while(k--){
	            if(grid[i][p++]!=s[q++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //horizontal left
	    if(j-n+1>=0){
	        bool flag=true;
	        int k=n,p=j,q=0;
	        while(k--){
	            if(grid[i][p--]!=s[q++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //vetical down
	    if(i+n-1<=r){
	        bool flag=true;
	        int k=n,p=i,q=0;
	        while(k--){
	            if(grid[p++][j]!=s[q++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //vetical up
	    if(i-n+1>=0){
	        bool flag=true;
	        int k=n,p=i,q=0;
	        while(k--){
	            if(grid[p--][j]!=s[q++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //diagonal up left
	    if(i-n+1>=0 && j-n+1>=0){
	        bool flag=true;
	        int k=n,p=i,q=j,m=0;
	        while(k--){
	            if(grid[p--][q--]!=s[m++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //diagonal down right
	    if(i+n-1<=r && j+n-1<=c){
	        bool flag=true;
	        int k=n,p=i,q=j,m=0;
	        while(k--){
	            if(grid[p++][q++]!=s[m++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //diagonal up right
	    if(i-n+1>=0 && j+n-1<=c){
	        bool flag=true;
	        int k=n,p=i,q=j,m=0;
	        while(k--){
	            if(grid[p--][q++]!=s[m++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    //diagonal down left
	    if(i+n-1<=r && j-n+1>=0){
	        bool flag=true;
	        int k=n,p=i,q=j,m=0;
	        while(k--){
	            if(grid[p++][q--]!=s[m++]){
	                flag=false;
	                break;
	            }
	        }
	        if(flag)return true;
	    }
	    return false;
	}
};