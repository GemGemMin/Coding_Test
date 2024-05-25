#include <iostream>
using namespace std;

int main(){
    int A, B, N;
    cin >> A >> B >> N;
    for (int i = 0; i < N; i++) {
        A = A % B;
        A *= 10;
    }
    cout << A / B;
}