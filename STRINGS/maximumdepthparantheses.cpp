#include <bits/stdc++.h>
using namespace std;

int nest(string s) {
    int maxi = 0;
    int cnt = 0;
    for (char c : s) {
        if (c == '(') {
            cnt++;
            maxi = max(maxi, cnt);  // update max depth
        } 
        else if (c == ')') {
            cnt--;
        }
        // if it's a digit/operator, ignore it
    }
    return maxi;
}

int main() {
    string s;
    cout << "enter string: ";
    cin >> s;
    cout << nest(s);
    return 0;
}
