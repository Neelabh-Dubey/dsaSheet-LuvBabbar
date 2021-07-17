//Print anagram together

vector<vector<string>> Anagrams(vector<string>& string_list) 
{
    vector<string>list=string_list;
    unordered_map<string,int>m;
    int n=string_list.size(),j=0;
    for(int i=0;i<n;i++)sort(string_list[i].begin(),string_list[i].end());
    for(int i=0;i<n;i++){
        if(m.find(string_list[i])==m.end()){
            m[string_list[i]]=j;
            j++;
        }
    }
    vector<vector<string>>ans(m.size());
    for(int i=0;i<n;i++){
        ans[m[string_list[i]]].push_back(list[i]);
    }
    return ans;
}