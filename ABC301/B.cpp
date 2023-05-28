#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    int cnt_abs=0;
    
    for(int i=0; i<N; i++){
        cin >> A.at(i);
        
        if(i>0){
            if(abs(A.at(i)-A.at(i-1)) != 1)
                cnt_abs++;
        }
    }

    if(cnt_abs == 0){
        for(int i=0; i<N; i++){
            cout << A.at(i) << " ";
        }
        return 0;
    } 

    auto it = A.begin();
    int i=0,cnt=0;

    while(cnt < N){
        int abs_A = A.at(i) - A.at(i+1);
        it++;

        if(abs_A < 0){            
            for(int j=1; j<abs(abs_A); j++){
                it = A.insert(it, A.at(i)+j);
                it++;
            }
        }
        else if(abs_A > 0){
            for(int j=1; j<abs(abs_A); j++){
                it = A.insert(it, A.at(i)-j);
                it++;
            }
        }

        int cnt_abs = 0;
        for(int i=1; i<A.size(); i++){
            if(abs(A.at(i)-A.at(i-1)) != 1)
                cnt_abs++;
        }

        if(cnt_abs == 0){
            for(int i=0; i<A.size(); i++){
                cout << A.at(i) << " ";
            }
            return 0;
        } 

        i += abs(abs_A);
        cnt++;
    }

    for(int i=0; i<A.size(); i++){
                cout << A.at(i) << " ";
            }
}