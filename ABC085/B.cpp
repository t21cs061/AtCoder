#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    int n;
    cin >> n;

    vector<int> d(n);

    rep(i, n)
        cin >> d.at(i);

    sort(d.begin(), d.end());

    int ans=1;

    rep(i, n-1){
        if(d.at(i) != d.at(i+1))
            ans++;
    }

    cout << ans << endl;
}