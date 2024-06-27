#include <iostream>
using namespace std;

long long int length[100001], price[100001];
int main(){
    int n;
    long long result = 0;
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        cin >> length[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    long long int min = price[0];
    for (int i = 0; i < n; i++) {
        result += length[i] * min;
        if (price[i + 1] < min) {
            min = price[i + 1];
        }
    }
    cout << result;
}