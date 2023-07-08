#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n,k;
    cin >> n >> k;

    vector<pair<int, int>> p(n);
    rep(i,n) cin >> p[i].first >> p[i].second;

    sort(p.begin(), p.end());

    ll sum = 0;
    rep(i,n) sum += p[i].second;

    if(sum <= k)
        cout << 1 << endl;
    else{
        rep(i,n){
            if(sum <= k){
                cout << p[i-1].first+1 << endl;
                return 0;
            }
            sum -= p[i].second;
        }
        cout << p.back().first+1 << endl;
    }
} 