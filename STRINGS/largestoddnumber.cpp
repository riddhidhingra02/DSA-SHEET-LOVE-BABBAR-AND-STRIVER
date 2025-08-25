#include <bits/stdc++.h>
using namespace std;
string check(string s){
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        int c=s[i]-'0';
        if(c%2!=0){
            return s.substr(0,i+1);
        }
    }
    return "";
}
int main() {
    string s;
    cout<<"enter string";
    cin>>s;
    cout<<check(s);
     return 0;
}