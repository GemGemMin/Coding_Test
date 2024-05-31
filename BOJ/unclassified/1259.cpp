#include <iostream>
using namespace std;

int main(){
    while (true) {
        string n;
        cin >> n;
        if(n == "0") break;

        bool isPal = true;
        for (int i = 0; i < n.size() / 2; i++) {
            if(n[i] != n[n.size()-i-1]) {
                isPal = false;
                break;
            }
        }
        if(isPal) cout << "yes\n";
        else cout << "no\n";
    }
}