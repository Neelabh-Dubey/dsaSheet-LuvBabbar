//Bracket balancing

/* Approach 1
Time Complexity = O(n)
Space Complexity = O(n)

class Solution{
public:
    int minimumNumberOfSwaps(string S){
        int cnt=0,n=S.length(),b=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(S[i]=='[')q.push(i);
        }
        for(int i=0;i<n;i++){
            if(S[i]=='['){
                b++;
                if(q.front()==i)q.pop();
            }
            else{
                b--;
                if(b<0){
                    cnt+=q.front()-i;
                    swap(S[i],S[q.front()]);
                    q.pop();
                    b=1;
                }
            }
            if(q.empty())break;
        }
        return cnt;
    }
};
*/

//Approach -2
//Time Complexity = O(n)
//Space Complexity =O(1)

class Solution{
public:
    int minimumNumberOfSwaps(string S){
        int swap=0,imb=0,l=0,r=0;
        for(int s:S){
            if(s=='['){
                l++;
                if(imb>0){
                    swap+=imb;
                    imb--;
                }
            }
            else{
                r++;
                imb=r-l;
            }
        }
        return swap;
    }
};
