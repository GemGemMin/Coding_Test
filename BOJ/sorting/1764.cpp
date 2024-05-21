#include<iostream>
#include<string>
#include<queue>
using namespace std;

priority_queue<string, vector<string>, greater<>> pq;
int main(){
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        pq.push(str);
    }
}


//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<set>
//using namespace std;
//
//vector<string> sum_v;
//int main(){
//    int N, M;
//    set<string> s;
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        string str;
//        cin >> str;
//        s.insert(str);
//        sum_v.push_back(str);
//    }
//    for (int i = 0; i < M; i++) {
//        string str;
//        cin >> str;
//        s.insert(str);
//        sum_v.push_back(str);
//    }
//    sort(sum_v.begin(), sum_v.end(), greater<>());
//
//
//}