#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main(){
    ll n;
    cin >> n;

    vector<ll> a(n+1);
    rep(i,n) cin >> a.at(i); 

    ll q;
    cin >> q;

    vector<ll> l(q+1);
    vector<ll> r(q+1);
    rep(i,q) cin >> l.at(i);
    rep(i,q) cin >> r.at(i);

    rep(i,q){
        ll ans=0;
        for(int j=1; j<n; j+=2){
            if(a.at(j) <= l.at(i)){
                if(r.at(i) <= a.at(j+1))
                    ans += r.at(i) - l.at(i);
                else
                    ans += a.at(j+1) - l.at(i);
            }
            if(r.at(i) <= a.at(j+1)){
                if(a.at(i) <= l.at(i))
                    ans += r.at(i) - l.at(j);
                else
                    ans += r.at(i) - a.at(j);
            }
        }
        cout << ans << endl;
    }
}