#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word, ans = "{";
    cin >> word;
    for (int i = 0; i < word.length()-2; i++) {
        for (int j = i + 1; j < word.length()-1; j++) {
            string val;
            for (int k = i; k >= 0; k--) val += word[k];
            for (int k = j; k > i; k--) val += word[k];
            for (int k = word.length()-1; k > j; k--) val += word[k];

            if(ans > val) ans = val;
        }
    }
    cout << ans;
    return 0;
}

//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    string word, fast_word, ans;
//    cin >> word;
//    for (int i = 1; i < word.length()-2; i++) {
//        for (int j = 1; j < word.length()-i; j++) {
//            string first_part = word.substr(0, i);
//            string second_part = word.substr(i, j);
//            string third_part = word.substr(i+j);
//            reverse(first_part.begin(), first_part.end());
//            reverse(second_part.begin(), second_part.end());
//            reverse(third_part.begin(), third_part.end());
//            first_part.append(second_part);
//            first_part.append(third_part);
//            if(i == 1 && j == 1) ans = first_part;
//            if(ans > first_part) ans = first_part;
//        }
//    }
//
//    cout << ans << "\n";
//}