#include <iostream>
using namespace std;

int main(){
    int X, ans = 0;
    cin >> X;
    for (int i = 64; i >= 1; i /= 2) {
        if(i > X) continue;
        else{
            X -= i;
            ans += 1;
        }
    }
    cout << ans;
}