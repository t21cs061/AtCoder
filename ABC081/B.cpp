#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    rep(i,n)
        cin >> a.at(i);
    
    int ans=0;
    int flag=1;

    while(flag){
        rep(i,n){
            if(a.at(i)%2 == 1){
                flag = 0;
                break;
            }
            else{
                a.at(i) /= 2;
            }            
        }
        if(flag)
            ans++;
    }
    
    cout << ans << endl;
}