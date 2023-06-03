#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    string t[4] = {"dream", "dreamer", "erase", "eraser"};

    string s;
    cin >> s;

    reverse(s.begin(), s.end());
    rep(i, 4)
        reverse(t[i].begin(), t[i].end());
    
    bool can = true;
    for(int i=0; i<s.size();){
        bool can2 = false;
        rep(j, 4){
            if(s.substr(i, t[j].size()) == t[j]){
                can2 = true;
                i += t[j].size();
            }
        }
        if(!can2){
            can = false;
            break;
        }
    }

    if(can)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
}