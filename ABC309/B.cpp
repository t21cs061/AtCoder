#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n;
    cin >> n;

    //vector<vector<string>> a(n, vector<string>(n));
    vector<string> a(n);
    rep(i,n){ 
            cin >> a[i];
    }

    //vector<vector<string>> ans(n, vector<string>(n));
    vector<string> ans(n, string(n, ' ')); 

    rep(i,n){
        rep(j,n){
            if(i==0){
                if(j==0)
                    ans[i][j] = a[i+1][j];
                else
                    ans[i][j] = a[i][j-1];
            }
            else if(i==n-1){
                if(j==n-1)
                    ans[i][j] = a[i-1][j];
                else
                    ans[i][j] = a[i][j+1];
            }
            else{
                if(j==0)
                    ans[i][j] = a[i+1][j];
                else if(j==n-1)
                    ans[i][j] = a[i-1][j];
                else                                                  
                    ans[i][j] = a[i][j];
            }  
            
        }
    }

    rep(i,n){
        rep(j,n){
            cout << ans[i][j];
        }
        cout << endl;
    }
}