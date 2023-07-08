#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ll n;
    cin >> n;

    vector<double> a(n);
    vector<double> b(n);
    vector<double> success(n);

    vector<pair<double, int>> indices(n);

    rep(i,n){
        cin >> a.at(i) >> b.at(i);
        success.at(i) = (a.at(i)/(a.at(i) + b.at(i)));
        indices.at(i) = make_pair(-success.at(i), i+1);
    }

   sort(indices.begin(), indices.end());

    for(auto v : indices)
        cout <<  v.second << " ";
    
}