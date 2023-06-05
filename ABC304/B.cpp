#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    long long int n;
    cin >> n;

    for(int i=1; i<=1000000; i*=10){
        if(n < 999){
            cout << n << endl;
            return 0;
        }
        if(n <= (i*1000-1)){
            long long int amari = n%i;
            n -= amari;
            cout << n << endl;
            return 0;
        }
    }
}