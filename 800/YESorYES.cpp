#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    string arr[t];
    for (int i=0;i<t;i++){
        cin>>arr[i];
    }
    int m=0;
    for (int i=0;i<t;i++){
        transform(arr[i].begin(), arr[i].end(), arr[i].begin(), ::tolower);
        if (arr[i]=="yes"){
            cout<<"YES";
            m=2;
            break;
        }
    }
    if (m==0){
        cout<<"NO";
    }
    return 0;
}