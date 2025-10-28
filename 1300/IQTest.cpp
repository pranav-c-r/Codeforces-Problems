#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int evencount=0,oddcount=0,j=0,k=0;
    for(int i=1;i<n+1;i++){
        if(arr[i-1]%2==0){
            evencount++;
            j=i;
        } else {
            oddcount++;
            k=i;
        }
    }
    if (evencount==1)
        cout<<j;
    else
        cout<<k;
    return 0;
}