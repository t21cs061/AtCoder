#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)

int main(){
    int n;
    cin >> n;
    
    vector<int> t(n);
    vector<int> x(n);
    vector<int> y(n);

    rep(i,n){
        cin >> t.at(i);
        cin >> x.at(i);
        cin >> y.at(i);
    }

    int t_now=0, x_now=0, y_now=0;

    rep(i, n){
        int distance = abs(x_now-x.at(i)) + abs(y_now-y.at(i));
        int time = t.at(i) - t_now;
        if(time < distance){
            cout << "No" << endl;
            return 0;
        }
        else if(distance%2 != time%2){
            cout << "No" << endl;
            return 0;
        }

        t_now = t.at(i);
        x_now = x.at(i);
        y_now = y.at(i);            
    }

    cout << "Yes" << endl;
}