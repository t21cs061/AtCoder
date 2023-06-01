#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<=(int)(n); i++)

int main(){
    int N, Y;
    cin >> N >> Y;

    int a=-1, b=-1, c=-1;

    rep(i, N){
        rep(j, N-i){
            int k=N-i-j;
            int price = 10000*i + 5000*j + 1000*k;
            if(price == Y){
                a = i;
                b = j;
                c = k;
            }    
        }  
    }

    /*
    rep(i, N){
        rep(j, N-i){
            rep(k, N-i-j){
                int price = 10000*i + 5000*j + 1000*k;
                if(price == Y){
                    a = i;
                    b = j;
                    c = k;
                    break;
                }                             
            }
        }  
    }
    */
    

    cout << a << " " << b << " " << c << endl; 
}