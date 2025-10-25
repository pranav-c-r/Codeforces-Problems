#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n<26){
        cout << "NO\n";
        return 0;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<bool> seen(26, false);
    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            seen[c - 'a'] = true;
    }
    bool is_pangram = all_of(seen.begin(), seen.end(), [](bool v){ return v; });

    if (is_pangram)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}