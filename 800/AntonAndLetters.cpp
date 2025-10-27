#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);  // since we have to read the full line including spaces
                     // take everything including the braces and commas
    set<char> letters;
    for (char ch : s){
        if (isalpha(ch)){        
            letters.insert(ch);   // insert each letter into set. By default set 
                                  // will accept only distinct elements.
        }
    }

    cout << letters.size();   // length of the set is number of unique elements
    return 0;
}