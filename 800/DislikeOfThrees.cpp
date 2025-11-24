#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int num=0;
        int count=0;
        
        while(count<k){
            num++;
            if (num%3==0) continue;
            if (num%10==3) continue;
            count++;
        }
        cout<<num<<endl;
    }
    return 0;
}