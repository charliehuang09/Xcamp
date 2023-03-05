//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <stack>
//#define ll long long
//using namespace std;
//const string alphabet = "abcdefghijklmnopqrstuvwxyz";
//
//
//void solve(){
//    string input;
//    cin.ignore();
//    getline(cin, input);
//    int ciphers;
//    cin >> ciphers;
//    stack<int> ceaser;
//    int a = 0;
//    int r = 0;
//    int c = 0;
//    char cyp[ciphers];
//    for (int i = 0; i < ciphers; i++){
//        int t;
//        cin >> cyp[i];
//        if (cyp[i] == 'C'){
//            cin >> t;
//            ceaser.push(t);
//        }
//    }
//    for (int i = ciphers - 1; i >= 0; i--){
//        if (cyp[i] == 'A') a++;
//        if (cyp[i] == 'R') r++;
//        if (cyp[i] == 'C'){
//            int temp = ceaser.top();
//            if (a % 2 == 0){
//                c -= temp;
//            }
//            else{
//                c += temp;
//            }
//            ceaser.pop();
//        }
//    }
//    for (int i = 0; i < input.length(); i++){
//        int t = input[i] - 'a';
//        if (t >= 0 && t <= 26){
//            t += c;
//            t %= 26;
//            if (t < 0) t += 26;
//            input[i] = alphabet[t];
//        }
//    }
//    if (a % 2 == 1){
//        for (int i = 0; i < input.length(); i++){
//            int t = input[i] - 'a';
//            if (t >= 0 && t <= 26){
//                t = 25 - t;
//                input[i] = alphabet[t];
//            }
//        }
//    }
//    if (r % 2 == 1) reverse(input.begin(), input.end());
//    cout << input << "\n";
//
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++) solve();
//
//}