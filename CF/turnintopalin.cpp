#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        int count = 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                if(s[left] == c){
                    s[right]= c;
                    count++;
                }
                else if (s[right] == c){
                    s[left] = c;
                    count++;
                }
                else{
                    s[left] = c;
                    s[right] = c;
                    count += 2;
                }
            }
            left++;
            right--;
        }
        cout << count << endl;
    }
    return 0;
}