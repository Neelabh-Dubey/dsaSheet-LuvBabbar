//Users who did not get computers

/* Set based approach

void check(int n,string s){
    unordered_set<char>user,nuser;
    int cnt=0;
    for(char c:s){
        if(nuser.count(c)){
            
        }
        else if(user.count(c)){
            user.erase(c);
        }
        else{
            if(user.size()<n)user.insert(c);
            else{
                cnt++;
                nuser.insert(c);
            }
        }
    }
    cout<<cnt<<"\n";
}
*/

//Approach 2
void check(int n, string s){
    vector<int>seen(26,0);
    //0- unoccupied
    //1- occupied
    //2- not place
    int cnt=0,trk=0;
    for(char c:s){
        if(seen[c-'A']==0){
            if(trk<n){
                trk++;
                seen[c-'A']=1;
            }
            else{
                cnt++;
                seen[c-'A']=2;
            }
        }
        else{
            if(seen[c-'A']==1)trk--;
            seen[c-'A']=0;
        }
    }
    cout<<cnt<<"\n";
}


#include<iostream>
#include<vector>
//#include<unordered_set>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    check(n,s);
    return 0;
}

