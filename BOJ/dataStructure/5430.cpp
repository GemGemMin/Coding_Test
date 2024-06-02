#include<iostream>
#include<deque>
#include<string>
using namespace std;


int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        string p, num;
        int n;
        bool isError = false, isReverse = false;
        deque<int> deq;
        cin >> p >> n >> num;
        string s = "";
        for (int j = 0; j < num.size(); j++) {
            if (isdigit(num[j])) {
                s += num[j];
            }
            else{
                if(!s.empty()) {
                    deq.push_back(stoi(s));
                    s = "";
                }
            }
        }

        for (int j = 0; j < p.size(); j++) {
            if (p[j] == 'R') {
                isReverse = !isReverse;
            } else if (p[j] == 'D') {
                if(deq.empty()) {
                    cout << "error\n";
                    isError = true;
                    break;
                }
                if(isReverse) deq.pop_back();
                else if(!isReverse) deq.pop_front();
            }
        }
        if(!isError) {
            cout << '[';
            if(isReverse){
                while (!deq.empty()) {
                    cout << deq.back();
                    deq.pop_back();
                    if (!deq.empty()) cout << ",";
                }
            }
            else{
                while (!deq.empty()) {
                    cout << deq.front();
                    deq.pop_front();
                    if (!deq.empty()) cout << ",";
                }
            }
            cout << "]\n";
        }
    }

}