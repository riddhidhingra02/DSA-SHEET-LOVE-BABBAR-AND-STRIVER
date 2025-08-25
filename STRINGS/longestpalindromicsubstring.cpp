#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s,int left,int right){
while(left>=0 && right<s.size() && s[left]==s[right]){
    left--;
    right++;
    
}
return s.substr(left+1,right-left-1);
}
int main() {
 cout<<"enter string ";
 string s;
 cin>>s;
 int n=s.size();
 string longest;
 for(int i=0;i<n;i++){
    string odd=longestPalindrome(s,i,i);
    string even=longestPalindrome(s,i,i+1);
    if(odd.size()>longest.size()) longest=odd;
    if(even.size()>longest.size()) longest=even;
 }
 cout<<"longest palindromic substring "<<longest;
    return 0;
}