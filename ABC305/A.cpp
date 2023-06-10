#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n,amari,water,ans;
    cin >> n;

    water = n/5;
    amari = n%5;

    if(amari != 0){
        if(amari<=2)
            ans = water*5;
        else    
            ans = water*5 + 5;
    }
    else   
        ans = water*5;

    cout << ans << endl;
}