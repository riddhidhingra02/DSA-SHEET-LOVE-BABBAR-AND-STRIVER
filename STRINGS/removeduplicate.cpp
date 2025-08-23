#include<bits/stdc++.h>
using namespace std;
void removeDuplicate1(string &s,int n){
   sort(s.begin(),s.end());
   int count=0;
    for(int i=0;i<n;i++){
        count=1;
        while(i+count<n && s[i]==s[i+count]){
            count++;
        }
            // If count > 1, print the character and its count
        if (count > 1) {
            cout << "['" << s[i] << "', " << count << "], ";
        }

        // Move to the next different character
        i += count-1;
        
    }
   
}
void removeDuplicate2(string &s,int n){
    unordered_map<char,int> mpp;
    for(char c:s){
        mpp[c]++;
    }
    for(auto it:mpp){
        if(it.second>1){
            cout<<"["<<it.first<<","<<it.second<<"]";
        }
    }
}
int main(){
    cout<<"Enter string ";
    string s;
    getline(cin,s);
    removeDuplicate1(s,s.size());
}