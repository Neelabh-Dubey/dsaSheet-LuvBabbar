//Roman Numeral to Integer

/*Method 1- if else ladder

int romanToDecimal(string &str) {
    int ans=0,n=str.length();
    for(int i=0;i<n;){
        if(str[i]=='M'){
            ans+=1000;
            i++;
        }
        else if(str[i]=='D'){
            ans+=500;
            i++;
        }
        else if(str[i]=='C'){
            if(i+1<n && str[i+1]=='D'){
                ans+=400;
                i+=2;
            }
            else if(i+1<n && str[i+1]=='M'){
                ans+=900;
                i+=2;
            }
            else{
                ans+=100;
                i++;
            }
        }
        else if(str[i]=='L'){
            ans+=50;
            i++;
        }
        else if(str[i]=='X'){
            if(i+1<n && str[i+1]=='L'){
                ans+=40;
                i+=2;
            }
            else if(i+1<n && str[i+1]=='C'){
                ans+=90;
                i+=2;
            }
            else{
                ans+=10;
                i++;
            }
        }
        else if(str[i]=='V'){
            ans+=5;
            i++;
        }
        else{
            if(i+1<n && str[i+1]=='V'){
                ans+=4;
                i+=2;
            }
            else if(i+1<n && str[i+1]=='X'){
                ans+=9;
                i+=2;
            }
            else{
                ans+=1;
                i++;
            }
        }
    }
    return ans;
}
*/

//Method 2- map based
int romanToDecimal(string &str) {
    unordered_map<char,int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int n=str.length();
    int ans=m[str[n-1]];
    for(int i=n-2;i>=0;i--){
        if(m[str[i]]<m[str[i+1]])ans-=m[str[i]];
        else ans+=m[str[i]];
    }
    return ans;
}