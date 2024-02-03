#include<iostream>
using namespace std;

int main(){
    int cnt = 0;
    string s;
    char init;
    cin >> s;
    init = s[0];
    for (int i = 1; i < s.length(); i++) {
        if(s[i - 1] == init && s[i] != init){
            cnt ++;
        }
    }
    cout << cnt << "\n";
}