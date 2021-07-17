//Check Pallindrome
//Time Complexity O(n);

class Solution{
public:	
	int isPlaindrome(string S)
	{
	    int i=0,j=S.length()-1;
	    while(i<j){
	        if(S[i]==S[j]){
	            i++;
	            j--;
	        }
	        else return 0;
	    }
	    return 1;
	}
};