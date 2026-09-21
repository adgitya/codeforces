#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a[3];
        for (int i = 0; i < 3; i++) {
            cin>>a[i];
        }
        if(abs((a[0]+a[2])-a[1]) == 0){
            cout<<abs(a[0]-a[1])<<endl;
        }
        else{
            cout<<abs((a[0]+a[2])-a[1])<<endl;
        }
    }
}