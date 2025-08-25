#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> firstPos; // to store first position of characters

// comparator function
bool comp(pair<int,char> &a, pair<int,char> &b) {
    if (a.first != b.first) 
        return a.first > b.first;           // higher frequency first
    return firstPos[a.second] < firstPos[b.second]; // earlier order first
}

string sortbyfreq(string s) {
    unordered_map<char,int> mpp;
    int idx = 0;
    for (char c : s) {
        if (mpp[c] == 0) firstPos[c] = idx;  // store first appearance
        mpp[c]++;
        idx++;
    }

    vector<pair<int,char>> freq;
    for (auto it : mpp) {
        freq.push_back({it.second, it.first});
    }

    sort(freq.begin(), freq.end(), comp);  // use comp function

    string ans;
    for (auto it : freq) {
        ans.append(it.first, it.second);
    }
    return ans;
}

int main() {
    string s;
    cout << "enter string: ";
    cin >> s;
    cout << sortbyfreq(s);
    return 0;
}
