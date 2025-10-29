#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Aarr[n];
    int Barr[n];
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        Aarr[i]=a;
        Barr[i]=b;
    }
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (Aarr[i]==Barr[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}