//Flips to make a binary string alternating
//Time Complexity = O(n)
//Space Complexity = O(1)

int minFlips (string S)
{
    int n=S.length();
    if(n==1)return 0;
    int fz=0,fo=0;
    for(int i=0;i<n;i+=2){
        if(S[i]=='0')fo++;
        else fz++;
        if(i+1<n){
            if(S[i+1]=='0')fz++;
            else fo++;
        }
    }
    return min(fo,fz);
}