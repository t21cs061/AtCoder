#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll int i=0; i<(int)(n); i++)
#define ll int 
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ll int H,W,N;
    cin >> H >> W >> N;

    vector<ll int> p(N);
    vector<ll int> q(N);
    rep(i,N) cin >> p.at(N) >> q.at(N);

    ll int A_num,B_num;
    cin >> A_num >> B_num;

    vector<ll int> A(A_num);
    vector<ll int> B(B_num);
    rep(i,A_num) cin >> A.at(i);
    rep(i,B_num) cin >> B.at(i);

    
}