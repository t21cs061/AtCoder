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

    
    auto it = A.begin();

    for (int i = 0; i < 5; ++i) {
    it = A.insert(it, i);
    it++;  // ここでインクリメントしないと同じ位置に挿入し続けてしまう
  }

    for(int i=0; i<A.size(); i++)
        cout << A[i] << " ";
    
    cout << endl;

    
}