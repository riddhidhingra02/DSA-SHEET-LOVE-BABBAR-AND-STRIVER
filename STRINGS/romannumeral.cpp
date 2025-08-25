#include <bits/stdc++.h>
using namespace std;
int roman(string s){
    
map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000; 
        int result=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i<n-1 && mpp[s[i]]<mpp[s[i+1]])
            result-=mpp[s[i]];
            else result+=mpp[s[i]];
        }
        return result;
}
int main() {
    cout << "enter roman numeral";
    string s;
    cin>>s;
    cout<<roman(s);
    return 0;
}
