#include<bits/stdc++.h>
using namespace std;
void reversee(string &s,int n){
    int i=0;int j=n-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
// reverse every word of a string
string reverseWord(string &s,int n){
       string ans="";
for(int i=0;i<n;i++){
 
    string word="";
    while(i<n&& s[i]!=' '){
        word+=s[i];
        i++;
    }
    reversee(word,word.size());
   
    if(word.length()>0) ans+=word+" ";
 
}
   return ans;
}
int main(){
    cout<<"enter string";
    string s;
    getline(cin, s);
    int n=s.size();
    // reversee(s,n);
    cout<<reverseWord(s,n);
    // cout<<s;
}