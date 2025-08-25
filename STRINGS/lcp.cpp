#include <bits/stdc++.h>
using namespace std;
string lcp(vector<string> s,int n){
    int m=s[0].size();
    string prefix=s[0];
for(int i=1;i<n;i++){
    int j=0;
    while(j<prefix.size() && prefix[j]==s[i][j]){
        j++;
    }
    prefix=prefix.substr(0,j);
if(prefix=="") return "";
}
return prefix;
}
int main() {
    vector<string> s={"flow","flower","flight","fly"};
    int n=s.size();
    cout<<lcp(s,n);

    return 0;
}