#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string combined=s1+s2;

     // Count characters
     // map stores key value pair. each key is a character and its value is the 
     // count of that character in the combined string
    map<char,int> count;
    for (char ch:combined)
        count[ch]++;

    // for each appearance in third string we subtract one from char count in map
    // if at the end all are 0 then their counts match in combined and s3 strings
    for (char ch:s3)
        count[ch]--;

     // Check if all counts are zero
    for (auto [ch, val] : count) {
        if (val != 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    
    return 0;
}