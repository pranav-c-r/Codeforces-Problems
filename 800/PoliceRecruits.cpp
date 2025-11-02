#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> lst(n);
    for(int i=0;i<n;i++)
        cin>>lst[i];
    int count=0;
    int y=0;    // count of -1
    int x=0;    // number of decrements done
    
    // count number of -1's
    for (int i:lst){
        if (i==-1)
            y++;
    }

    for (int i:lst){
        if (i>0){
            count+=i;
        } else {
            while(count!=0){
                x++;
                count--;
            }
        }
    }

    cout<<y-x<<endl;
    return 0;
}