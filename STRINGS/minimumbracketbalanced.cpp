#include <bits/stdc++.h>
using namespace std;
int minimumAdd(string s){
    int n=s.size();
    int add=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='(') cnt++;
        else{
            if(cnt>0) cnt--;
            else add++;
        }
    }
    return abs(add+cnt);
}
int main() {
    cout << "ENTER STRING ";
    string s;
    cin>>s;
    cout<<minimumAdd(s);
    return 0;
}