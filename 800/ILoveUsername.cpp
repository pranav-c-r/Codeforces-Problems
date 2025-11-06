#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> lst(n);
    for (int i=0;i<n;i++) cin>>lst[i];
    vector<int>curr;
    curr.push_back(lst[0]);
    int amazing=0;
    
    for(int i=0;i<n;i++){
        if(lst[i]>(*max_element(curr.begin(),curr.end())) ||
        lst[i]<(*min_element(curr.begin(),curr.end()))){
            amazing++;
        }
        curr.push_back(lst[i]);
    }

    cout<<amazing<<endl;
    
    return 0;
}