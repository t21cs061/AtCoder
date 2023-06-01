#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int ans=0;
    for(int i=1; i<=n; i++){
        int sum=0, tmp=i;
        while(tmp>0){
            sum += tmp%10;
            tmp /= 10;
        }

        if(a <= sum && sum <= b)
            ans += i;            
    }

    cout << ans << endl;
}