#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int diff=abs(a-b);
        int moves=(diff+9)/10; // to find the ceil(diff/10) 
        cout<<moves<<endl;     // each move can give upto 10. so take the
                               // ceil after dividing by 10.
    }
    return 0;
}