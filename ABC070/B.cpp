#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    int ans=0;
    if(A<=C && C<=B){
        if(B<D)
            ans = B-C;
        else    
            ans = D-C;
    }
    else if(C<=A && A <= D){
        if(D<B)
            ans = D-A;
        else    
            ans = B-A;
    }

    cout << ans << endl;
}