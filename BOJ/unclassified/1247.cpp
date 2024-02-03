#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < 3; i++){
        long long int sum = 0, temp;
        for(int j = 0; j < N; j++){
            cin >> temp;
            sum += temp;
        }
        if(sum > 0) cout << "+\n";
        else if(sum == 0) cout << "0\n";
        else cout << "-\n";
    }
}