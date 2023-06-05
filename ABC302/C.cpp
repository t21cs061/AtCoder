#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int N, M;
    cin >> N >> M;

    vector<string> s(N);
    rep(i,N) cin >> s[i];

    sort(s.begin(), s.end());

    do{
        bool ok = true;
        rep(i,N-1){
            int cnt=0;
            rep(j,M){
                if(s[i][j] != s[i+1][j])
                    cnt++;
            }
            if(cnt != 1)
                ok = false;
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));

    cout << "No" << endl;
}