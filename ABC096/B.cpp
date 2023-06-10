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

    string snuke = "snuke";

    rep(si,H)rep(sj,W){
        rep(v,8){
            int i=si, j=sj;
            rep(k,5){
                if(i<0 || j<0 || i>=H || j>=W)
                    break;
                if(s.at(i).at(j) != snuke.at(k))
                    break;
                if(k == 4){
                    i = si;
                    j = sj;
                    
                    rep(nk,5){
                        printf("%d %d\n", i+1, j+1);
                        i += dx[v];
                        j += dy[v];
                    }
                }
                i += dx[v];
                j += dy[v];
            }
        }
    }
}