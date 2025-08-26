#include <bits/stdc++.h>
using namespace std;

bool shuffle(string a, string b, string c) {
    int n = a.size();
    int m = b.size();
    if(c.size() != n + m) return false;

    int i = 0, j = 0; // i for A, j for B

    for(char ch : c) {
        if(i < n && ch == a[i]) i++;       // take from A
        else if(j < m && ch == b[j]) j++;  // take from B
        else return false;                 // mismatch
    }

    return i == n && j == m; // all characters used
}

int main() {
    string a, b, c;
    cout << "Enter strings A, B, C: ";
    cin >> a >> b >> c;

    if(shuffle(a, b, c))
        cout << "C is a valid shuffle of A and B";
    else
        cout << "C is NOT a valid shuffle of A and B";

    return 0;
}
