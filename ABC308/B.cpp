#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n,m;
    cin >> n >> m;

    vector<string> c(n);
    rep(i,n)
        cin >> c.at(i);

    vector<string> d(m);
    rep(i,m)
        cin >> d.at(i);

    vector<int> p(m+1);
    rep(i,m+1)
        cin >> p.at(i);

    int ans = 0;
    rep(i,n){
        int price = p.at(0);
        rep(j,m){
            if(c.at(i) == d.at(j)){
                price = p.at(j+1);
                break;
            }
        }
        ans += price;
    }

    cout << ans << endl;
}