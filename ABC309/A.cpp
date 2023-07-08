#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(int)(n); i++)
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int a, b;
    cin >> a >> b;

    if(abs(a-b) == 1){
        if(a==3 && b==4)
            cout << "No" << endl;
        else if(a==6 && b==7)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
        
    else
        cout << "No" << endl;
}