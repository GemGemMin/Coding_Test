#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    string s[51];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    string stan_s = s[0];
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < s[i].size(); j++) {
            if(stan_s[j] != s[i][j]) {
                stan_s[j] = '?';
            }
        }
    }
    cout << stan_s;
}