#include <iostream>
using namespace std;

int N,sum = 0, temp;
int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> temp;
        sum += temp;

    }
    cout << sum - (N - 1) << "\n";
}