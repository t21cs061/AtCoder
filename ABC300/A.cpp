#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, N;
    cin >> N >> A >> B;

    int C[N+1];

    for(int i=1; i<=N; i++){
        cin >> C[i];
        if(C[i] == A+B)
            cout << i << endl;
    }
}