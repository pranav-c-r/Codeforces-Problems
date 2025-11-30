#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        int mx=0;
        for(int i=0;i<n;i++){
            if (arr[i]==0){
                count++;
                if (count>mx)
                    mx=count;
            }
                
            else if (arr[i]==1)
                count=0;
        }
        cout<<mx<<endl;

    }
    return 0;
}