#include<bits/stdc++.h>
#include<string>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n;
    cin >> n;

    vector<string> s(n);
    vector<int> a(n);
    rep(i,n) cin>>s.at(i) >> a.at(i);

    vector<int> tmp(n);
    tmp = a;
    sort(tmp.begin(), tmp.end());

    int min = tmp.at(0);
    int start=0;
    rep(i,n){
        if(a.at(i) == min){
            start = i;
            break;
        }
    }

    rep(i,n){
        cout << s.at(start) << endl;
        start++;
        if(start == n)
            start = 0;
    }
}