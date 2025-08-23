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
int main(){
cout<<"Enter the string";
string s,r;

cin>>s;
r=s;
reversee(s,s.size());
if(s==r) cout<<true;
else cout<<false;
}