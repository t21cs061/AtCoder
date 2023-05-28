#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)

int main(){
    int N, M;
    cin >> N >> M;

    vector A(M, vector<int>(N));

    rep(i,M)rep(j,N) cin >> A[i][j];
    rep(i,M)rep(j,N) A[i][j]--;

    vector g(N, vector<bool>(N));
    rep(i,M){
        rep(j, N-1){
            g[A[i][j]][A[i][j+1]] = true;
        }
    }

    int ans=0;
    rep(x,N)rep(y,x){
        if(g[x][y] || g[y][x])
            continue;
        ans++;
    }

    cout << ans << endl;
}
