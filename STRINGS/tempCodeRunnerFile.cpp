#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(string &s,int n){
    unordered_map<char,int> mpp;
    for(char c:s){
        mpp[c]++;
    }
    for(auto it:mpp){
        if(it.second>1){
            cout<<"["<<it.first<<","<<it.second<<"]";
        }
    }
}
int main(){
    cout<<"Enter string ";
    string s;
    getline(cin,s);
    removeDuplicate(s,s.size());
}