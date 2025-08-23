#include<bits/stdc++.h>
using namespace std;
void stringRotation(string s,string r){
    char last;
    for(int i=0;i<s.size();i++){
        last=r.back();
        r.pop_back();
        r=last+r;
        if(s==r) cout<<"true";
    
    }
}
bool stringRotation1(string s,string r){
    string last=s+s;
    if(last.find(r)!=string::npos) return true;
    else return false;
}
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    string goal;
    cout<<"enter goal";
    cin>>goal;
    if(s.size()!=goal.size()) return false;
    cout<<stringRotation1(s,goal);
}