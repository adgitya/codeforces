#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        vector <int> a(3);
        int n;
        cin>>n;
        for(int i=0; i<3; i++){
            cin>>a[i];
        }
        int mini = *min_element(a.begin(), a.end());
        cout<<n-mini<<endl;
    }
}