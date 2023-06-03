#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    long long int A, B;
    cin >> A >> B;

    long long int ans=0;

    if(A%B == 0)
        ans = A/B;
    else    
        ans = A/B + 1;
    
    cout << ans << endl;
}