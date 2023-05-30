#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    string S, T;
    cin >> S >> T;

    int cnt=0;
    for(int i=0; i<N; i++){
        if(S[i] == T[i])
            cnt++;
        else if(S[i] == '0' && T[i] == 'o')
            cnt++;
        else if(T[i] == '0' && S[i] == 'o')
            cnt++;
        else if(S[i] == '1' && T[i] == 'l')
            cnt++;
        else if(T[i] == '1' && S[i] == 'l')
            cnt++;
    }

    if(cnt == N)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
