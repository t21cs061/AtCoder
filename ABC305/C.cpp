#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main(){
    int H, W;
    cin >> H >> W;

    vector<string> s(H);
    rep(i,H) cin >> s.at(i);

    int i_start = H;
    int j_start = W;
    int i_end = 0;
    int j_end = 0;
    rep(i,H){
        rep(j,W){
            if(s.at(i).at(j) == '#'){
                
                if(i_start > i)
                    i_start = i;
                if(i_end < i)    
                    i_end = i;
                if(j_start > j)
                    j_start = j;
                if(j_end < j)    
                    j_end = j;                
            }
        }
    }
    /*
    cout << i_start << "," << j_start << endl;
    cout << i_end << "," << j_end << endl;
    */
    

    for(int i=i_start; i<=i_end; i++){
        for(int j=j_start; j<=j_end; j++){
            if(s.at(i).at(j) == '.')
                cout << i+1 << " " << j+1 << endl;
        }
    }
}