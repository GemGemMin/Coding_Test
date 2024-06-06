#include <iostream>

using namespace std;

void min_mult(int A, int B){
    int i = 1, j = 1;
    while (true) {
        int temp_A = A * i, temp_B = B * j;
        if(temp_A < temp_B) {
            i++;
            continue;
        }
        else if(temp_A > temp_B) {
            j++;
            continue;
        } else {
            cout << temp_A << "\n";
            return;
        }
    }

}

int main(){
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        if(A > B) {
            int temp = A;
            A = B;
            B = temp;
        }
        min_mult(A, B);
    }
    return 0;
}