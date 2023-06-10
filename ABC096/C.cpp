#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main(){
    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    rep(i,H) cin >> s.at(i);

    rep(i, H){
        rep(j, W){
            if(s.at(i).at(j) == '#'){
                int cnt=0;
                rep(k, 4){
                    int x = i+dx[k];
                    int y = j+dy[k];

                    if(x>=0 && x<H && y>=0 && y<W && s.at(x).at(y) == '#')
                        cnt++;
                }

                if(cnt == 0){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;
}