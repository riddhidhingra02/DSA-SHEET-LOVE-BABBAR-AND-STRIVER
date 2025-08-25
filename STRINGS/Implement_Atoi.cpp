#include <bits/stdc++.h>
using namespace std;
int atoi(string s){
    if(s.size()==0) return 0;
    int sign=1;
    int i=0;
    int n=s.size();
    while(i<n && s[i]==' ') i++;
    if(i<n && (s[i]=='-'|| s[i]=='+')){
         sign=s[i]=='-'?-1:1;
i++;
    }
    int result=0;
    while(i<n && isdigit(s[i])){
        result=result*10+(s[i]-'0');
        if(result*sign>INT_MAX) return INT_MAX;
        if(result*sign<INT_MIN) return INT_MIN;
        i++;
    }
    return result*sign;
}
int main() {
    cout << "enter string ";
    string s;
    cin>>s;
    cout<<atoi(s);
    return 0;
}
