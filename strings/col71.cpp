//Check for balanced paranthesis

//Time Complexity =O(len(str)) i.e. O(n)

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int crly=0,par=0,sqr=0;
        for(char c:x){
            if(c=='{')crly++;
            else if(c=='(')par++;
            else if(c=='[')sqr++;
            else if(c=='}')crly--;
            else if(c==')')par--;
            else sqr--;
            if(crly<0||par<0||sqr<0)return false;
        }
        if(crly||par||sqr)return false;
        return true;
    }

};

// This can be solved using stack as well but that approach will not be of constant extra space