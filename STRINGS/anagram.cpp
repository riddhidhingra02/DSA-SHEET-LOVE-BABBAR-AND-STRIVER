#include <bits/stdc++.h>
using namespace std;
bool anagramSort(string s,string r){
    sort(s.begin(),s.end());
    sort(r.begin(),r.end());
    if(s==r) return true;
    return false;
}
bool anagram(string s, string r) {
    if (s.size() != r.size()) return false;  // quick check

    vector<int> freq(26, 0);
    for (char c : s) {
        if (isalpha(c)) freq[tolower(c) - 'a']++;
    }
    for (char c : r) {
        if (isalpha(c)) freq[tolower(c) - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) return false;
    }
    return true;
}

int main() {
    string s, r;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> r;

    if (anagramSort(s, r)) 
        cout << "The strings are anagrams!" << endl;
    else 
        cout << "The strings are NOT anagrams." << endl;

    return 0;
}
