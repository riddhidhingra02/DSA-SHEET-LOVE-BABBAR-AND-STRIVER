#include <bits/stdc++.h>
using namespace std;
int bitflips(string s){
    int flip1=0;
    int flip2=0;
    char expected1;
    char expected2;
    for(int i=0;i<s.size();i++){
      expected1=(i%2==0)?'1':'0';//1010101010
      expected2=(i%2==0)?'0':'1';//010101010
      if(s[i]!=expected1) flip1++;
       if(s[i]!=expected2) flip2++;
    }
    return min(flip1,flip2);
}
int main() {
    cout << "Enter the string ";
    string s;
    cin>>s;
    cout<<bitflips(s);
    return 0;
}