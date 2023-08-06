#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    string s;
    cin >> s;

    int ans = 0;
    rep(i,10000){
        vector<bool> flag(10);
        int x = i;
        rep(j,4){
            flag[x%10] = true;
            x /= 10;
        }

        bool flag2 = true;
        rep(j,10){
            if(s[j] == 'o' && !flag[j]) flag2 = false;
            if(s[j] == 'x' && flag[j]) flag2 = false;
        }
        ans += flag2;
    }

    cout << ans << endl;
}