#include <bits/stdc++.h>
using namespace std;
string sortbyFreq(string s){
    map<char,int> mpp;
    for(char c:s){
        mpp[c]++;
    }
    vector<pair<int,char>> freq;
    for(auto it:mpp){
     
            freq.push_back({it.second,it.first});
            

        }
        sort(freq.rbegin(),freq.rend());
    
    string a;
    for(auto it:freq){
        for(int i=0;i<it.first;i++)
        a+=it.second;
    }
    return a;
}
int main() { 
 string s;
 cout<<"enter string";
 cin>>s;
 cout<<sortbyFreq(s);

    return 0;
}