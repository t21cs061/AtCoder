#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    rep(i,H) cin >> s.at(i);

    rep(i, H){
        rep(j, W){
            if(s.at(i).at(j) == '#')
                continue;

            int cnt=0;
            rep(k, 8){
                int x=i+dx[k];
                int y=j+dy[k];
                if(x<0 || H<=x || y<0 || W<=y)
                    continue;
                
                if(s.at(x).at(y) == '#')
                    cnt++;
            }
            
            s.at(i).replace(j, 1, to_string(cnt));
        }
    }

    rep(i, H)
        cout << s.at(i) << endl;
}