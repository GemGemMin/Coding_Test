#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N = 0, S;
    cin >> S;
    long long int i = 1;
    while (S != 0) {
        if (S - i >= 0 && S - i >= i + 1) {
            S -= i;
            i++;
            N++;
        }
        else{
            N++;
            break;
        }
    }
    cout << N;
}