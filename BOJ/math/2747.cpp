#include<iostream>

using namespace std;

int pib[46];
int main(){
    int n;
    cin >> n;
    pib[0] = 0;
    pib[1] = 1;
    for (int i = 2; i <= n; i++) {
        pib[i] = pib[i - 2] + pib[i - 1];
    }
    cout << pib[n];
}