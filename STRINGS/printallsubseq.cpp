#include <bits/stdc++.h>
using namespace std;
void subseq(string s,int index=0,string curr=" "){
    if(index==s.size()){
        cout<<curr;
        return;
    } 
    // pick
    subseq(s,index+1,curr+s[index]);
    // not pick 
    subseq(s,index+1,curr);
}
int main() {
    cout << "Enter string! ";
    string s;
    cin>>s;
    subseq(s);
    return 0;
}