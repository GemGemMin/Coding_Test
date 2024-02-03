#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, a, b;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> b;
        int midPoint, first = 0, last = v.size() -1;
        bool moreToSearch = (first <= last), found = false;
        while(moreToSearch && !found){
            midPoint = (first + last) / 2;
            if(v[midPoint] < b){
                first = midPoint + 1;
                moreToSearch = (first <= last);
            }
            else if (v[midPoint] > b){
                last = midPoint - 1;
                moreToSearch = (first <= last);
            }
            else if(v[midPoint] == b){
                cout << 1 << "\n";
                found = true;
                break;
            }
        }
        if(!found) cout << 0 << "\n";
    }

}