#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    string p,q;
    cin >> p >> q;

    int distance[7] = {0, 3, 1, 4, 1, 5, 9};
    string alpha[7] = {"A", "B", "C", "D", "E", "F", "G"};

    int dist, p_dist, q_dist, p_position, q_position;

    rep(i,7){
        if(p == alpha[i])
            p_position = i;
        if(q == alpha[i])
            q_position = i;
    }

    if(p_position > q_position)
        swap(p_position, q_position);
    
    int ans=0;
    for(int i=p_position+1; i<=q_position; i++)
        ans +=  distance[i];

    cout << ans << endl;
}