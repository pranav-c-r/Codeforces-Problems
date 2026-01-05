#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int height=0;
    int level=1;

    while(true){
        int cubesNeeded=(level*(level+1))/2;
        if (n>=cubesNeeded){
            n-=cubesNeeded;
            height++;
            level++;
        } else {
            break;
        }
    }

    cout<<height<<endl;
    
    return 0;
}