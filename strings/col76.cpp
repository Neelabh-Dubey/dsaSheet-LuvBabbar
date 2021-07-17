//Count Reversal for balancing paranthesis
//Time Complexity = O(n)
//Space Complexity = O(1)
int countRev (string s)
{
    int n=s.length();
    if(n%2)return -1;
    int t=0,cnt=0;
    for(char c:s){
        if(c=='{')t++;
        else t--;
        if(t==-1){
            t=1;
            cnt++;
        }
    }
    cnt+=t/2;
    return cnt;
}