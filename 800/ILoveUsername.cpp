#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> lst(n);
    for (int i = 0; i < n; i++) cin >> lst[i];

    int amazing = 0;
    int mn = lst[0];
    int mx = lst[0];

    for (int i = 1; i < n; i++) {  // start from 1
        if (lst[i] > mx || lst[i] < mn)
            amazing++;
        mx = max(mx, lst[i]);
        mn = min(mn, lst[i]);
    }

    cout << amazing << "\n";
    return 0;
}

// FIRST CODE - WRONG ONE

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin>>n;
//     vector<int> lst(n);
//     for (int i=0;i<n;i++) cin>>lst[i];
//     vector<int>curr;
//     curr.push_back(lst[0]);
//     int amazing=0;
    
//     for(int i=0;i<n;i++){
//         if(lst[i]>(*max_element(curr.begin(),curr.end())) ||
//         lst[i]<(*min_element(curr.begin(),curr.end()))){
//             amazing++;
//         }
//         curr.push_back(lst[i]);
//     }

//     cout<<amazing<<endl;
    
//     return 0;
// }



/*
WHY IS IT WRONG ?

What’s wrong in your code

You start with:
curr.push_back(lst[0]);

and then immediately in your loop, you start checking from i = 0.

That means for i = 0, you compare lst[0] against itself —
so it will never count as amazing (and that’s fine), but you also push it twice into curr.

✅ The main issue is efficiency and redundant use of max_element and min_element —
you don’t need to compute them for every iteration using full vector search.
*/