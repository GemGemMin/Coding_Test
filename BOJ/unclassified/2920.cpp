#include <iostream>
using namespace std;

int main(){
    bool des = true, asc = true;
    for (int i = 1; i <= 8; i++) {
        int n;
        cin >> n;
        if(n != i) asc = false;
        if(i + n != 9) des = false;
    }
    if(asc) cout << "ascending";
    else if(des) cout << "descending";
    else cout << "mixed";
}