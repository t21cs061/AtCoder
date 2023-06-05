#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n,d;
    cin >> n >> d;

    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) cin >> x.at(i) >> y.at(i);

    vector<bool> virus(n);
    virus.at(0) = true;
    
    rep(i,10){
        rep(i, n){
            if(virus.at(i)){
                rep(j,n){
                    if(i == j)
                        continue;

                    double distance = sqrt((x.at(i)-x.at(j))*(x.at(i)-x.at(j)) + (y.at(i)-y.at(j))*(y.at(i)-y.at(j)));

                    if(distance <= d){
                        virus.at(j) = true;
                    }
                }
            }
        }
    }

    rep(i,n){
        if(virus.at(i))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}