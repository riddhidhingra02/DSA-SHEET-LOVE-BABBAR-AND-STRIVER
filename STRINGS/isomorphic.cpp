#include<bits/stdc++.h>
using namespace std;
bool isomorphic(string s,string r){
    if(s.size()!=r.size()) return false;
    map<char,char> mpp;
    map<char,char> mpp1;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        char d=r[i];
        if(mpp.find(c)!=mpp.end()) {
            if(mpp[c]!=d) return false;
        }
        else{
            mpp[c]=d;
        }
        if(mpp1.find(d)!=mpp1.end()) {
            if(mpp1[d]!=c) return false;
        }
        else{
            mpp1[d]=c;
        }
    }
    return true;
}
int main(){
    string s;
    string r;
    cout<<"enter first string ";
    cin>>s;
    cout<<"enter second string";
    cin>>r;
    if(!isomorphic(s,r)){
        cout<<"strings are not isomorphic";
    }
    else{
        cout<<"strings are  isomorphic";
    }
}