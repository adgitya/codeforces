#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int lar=a[0];
        for (int i=0;i<n;i++){
            if(a[i]>lar){
                lar = a[i];
                swap (a[0], a[i]);
            }
        }
        int m=0, b=0;
        for (int i=0; i<n; i++){
            if(a[i]%2==0) m+=a[i];
            else b+=a[i];
        }
        if(m>b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}