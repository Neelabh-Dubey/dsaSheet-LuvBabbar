//Recursiveli print all sentences

#include<iostream>
using namespace std;

#define R 3
#define C 3

void print(string arr[][C],int row,string t){
    if(row==R){
        cout<<t<<"\n";
        return;
    }
    for(int i=0;i<C;i++){
        if(arr[row][i]!="") print(arr,row+1,t+" "+arr[row][i]);
    }
}
int main()
{
   string arr[R][C]  = {{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat", "drink"}};
 
   print(arr,0,"");
 
   return 0;
}