#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a;
    while(true){
        cin >> a;
        if(a == -1) break;

        vector<int> v;
        int temp = a;
        for(int i = a-1; i > 0; i--){
            if(a % i == 0){
                v.push_back(i);
                temp = temp - i;
            }
            if (temp < 0) break;
        }
        if(temp != 0) cout << a << " is NOT perfect.\n";
        else{
            cout << a << " = ";
            while (!v.empty()) {
                cout << v.back();
                v.pop_back();
                if(!v.empty()) cout << " + ";
            }
            cout << "\n";

        }

    }
}