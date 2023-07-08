#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    vector<int> s(8);
    rep(i,8)
        cin >> s.at(i);

    rep(i,8){
        if(s.at(i)%25 != 0){
            cout << "No" << endl;
            return 0;
        }
        else if(100 > s.at(i) || 675 < s.at(i)){
            cout << "No" << endl;
            return 0;
        }
        
        if(i <= 6){
            if(s.at(i) > s.at(i+1)){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    
    cout << "Yes" << endl;
}