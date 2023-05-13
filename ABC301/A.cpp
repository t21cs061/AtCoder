#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    string S;
    cin >> S;

    int t=0, a=0, cnt=0;

    for(int i=0; i<N; i++){
        if(S[i] == 'T'){
            t++;
            cnt = 1;
        }
        else{
            a++;
            cnt = 2;
        }
    }

    if(t>a){
        cout << "T" << endl;
    }
    else if(t<a){
        cout << "A" << endl;
    }
    else{
        if(cnt == 2){
            cout << "T" << endl;
        }
        else
            cout << "A" << endl;
    }
}