#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<=(int)(n); i++)

int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int ans=0, price;

    rep(i, A){
        rep(j, B){
            rep(k, C){
                price = 500*i + 100*j + 50*k;
                if(price == X)
                    ans++;
            }
        }
    }

    cout << ans << endl;
}