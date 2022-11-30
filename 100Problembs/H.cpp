//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//bool is_prime(int input){
//    if (input <= 1) return false;
//    // if (input )
//    for (int i = 2; i <= sqrt(input); i++){
//        // cout << i;
//        if (input % i == 0) return false;
//    }
//    return true;
//}
//int main(){
//    // ios_base::sync_with_stdio(0);
//    // cin.tie(0);
//    // cout << is_prime(2) << " " << is_prime(7) << " " << is_prime(14);
//    // return 0;
//    int length, largest = -1;
//    cin >> length;
//    int input[length];
//    int output[length];
//    memset(output, 0, sizeof(output));
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//        largest = max(largest, input[i]);
//    }
//    for (int i = 0; i <= largest; i++){
//        if (is_prime(i)){
//            for (int j = 0; j < length; j++){
//                if (input[j]%i == 0){
//                    output[j]++;
//                    // cout << i << " a\n";
//                }
//            }
//        }
//    }
//    for (int i = 0; i < length; i++) cout << output[i] << "\n";
//
//    return 0;
//}