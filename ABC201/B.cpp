#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
   int n;
   cin >> n;

   vector<pair<int, string>> p;

   rep(i,n){
        string s;
        int t;
        cin >> s >> t; 
        p.push_back({t,s});
   }

   sort(p.begin(), p.end());

   cout << p[p.size()-2].second << endl;
}