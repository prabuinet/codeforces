#include <bits/stdc++.h>
using namespace std;
 
void doit() {
    int n, m;
    cin >> n >> m;
 
    string s, t;
 
    cin >> s;
    cin >> t;
 
    bool tvalid = true;
    for(int i = 1; i < m; i++) {
        if(t[i - 1] == t[i]) {
            tvalid = false;
            break;
        }
    }
 
    char tfirst = t[0];
    char tlast = t[m - 1];
    
    for(int i = 1; i < n; i++) {
        if(s[i - 1] == s[i]) {
            if(!tvalid) {
                cout << "No" << endl;
                return;
            }
            else {
                if(s[i - 1] != tfirst && s[i] != tlast)
                    continue;
                else {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
 
    cout << "Yes" << endl;
}
 
int main() {
    int T;
    cin >> T;
    while(T--)
        doit();
    return 0;
}
