#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, K, temp, cnt = 0;
    vector<int> v;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> temp;
        v.push_back(temp);
    }
    while(!v.empty()){
        int top = v.back();
        v.pop_back();
        if(top > K) continue;
        cnt += (K / top);
        K -= (K / top) * top;
        if(K == 0) break;
    }

    cout << cnt << "\n";


}