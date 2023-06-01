#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    rep(i, n)
        cin >> a.at(i);
    
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int cnt_a=0, cnt_b=0;
    rep(i, n){
        if(i%2 == 0)
            cnt_a += a.at(i);
        else
            cnt_b += a.at(i);
    }

    cout << cnt_a - cnt_b << endl;
}