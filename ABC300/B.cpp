#include<bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    string A[30], B[30], tmp;

    for(int i=0; i<H; i++){
        cin >> A[i];
    }
    for(int i=0; i<H; i++){
        cin >> B[i];
    }

    int count=0, check=0;
    for(int i=0; i<H; i++){
            if(A[i].compare(B[i]) == 0)
                check++;
    }
    if(check == H){
        cout << "Yes" << endl;
        return 0;
    }
    else
        check = 0;




    while(count < H){ 
            for(int i=1; i<H; i++){
                tmp = A[i-1];
                A[i-1] = A[i];
                A[i] = tmp;
            }
            for(int i=0; i<H; i++){
                if(A[i].compare(B[i]) == 0)
                    check++;
            }
            if(check == H){
                cout << "Yes" << endl;
                return 0;
            }
            
            else{
                check = 0;
                int cnt = 0;
                char tmp;
                while(cnt < W){
                    for(int i=0; i<H; i++){
                        for(int j=1; j<W; j++){
                            tmp = A[i][j-1];
                            A[i][j-1] =  A[i][j];
                            A[i][j] = tmp;
                        }
                    }
                    for(int i=0; i<H; i++){
                        if(A[i].compare(B[i]) == 0)
                            check++;
                    }
                    if(check == H){
                        cout << "Yes" << endl;
                        return 0;
                    }
                    else{
                        check=0;
                        cnt++;
                    }
                }
            }   
        count++;
    }
        cout << "No" << endl;
}

