#include <bits/stdc++.h>
using namespace std;
int sum(string s){
    int n=s.size();
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int totalbeauty=0;
    for(int i=0;i<n;i++){
        int freq[26]={0};
        for(int j=i;j<n;j++){
          freq[s[j]-'a']++;
          mini=INT_MAX;
          maxi=INT_MIN;
          for(int k=0;k<26;k++){
              if (freq[k] > 0) {  // ✅ only count characters present in substring
                        maxi = max(maxi, freq[k]);
                        mini = min(mini, freq[k]);
                    }
          }
          totalbeauty+=maxi-mini;
        }
    }
    return totalbeauty;

}
int main() {
 string s;
 cout<<"enter string";
 cin>>s;
 cout<<sum(s);
    return 0;
}