#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int a[3];
    rep(i,3) cin >> a[i];

    rep(i,3){
        int left = 0;
        rep(j,3) if(i != j) left += a[j];

        int right = a[i] * 2;

        if(left == right){
            cout << "Yes" << endl;
            return 0;       
        }
    }
    cout << "No" << endl;
}