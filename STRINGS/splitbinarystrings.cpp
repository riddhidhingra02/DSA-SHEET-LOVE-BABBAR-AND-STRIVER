#include <bits/stdc++.h>
using namespace std;
int binary(string s){
    int cnt1=0;
    int cnt0=0;
    int ans=0;
    for(char c:s){
        if(c=='0') cnt0++;
        else cnt1++;
        if(cnt1==cnt0) ans++;

    }
    if(ans==0) return -1;
    return ans;
}
int main() {
    cout << "Enter the binary string! ";
    string s;
    cin>>s;
    cout<<binary(s);
    return 0;
}
