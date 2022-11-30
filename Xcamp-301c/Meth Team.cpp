//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//const int nums = 6;
//const int bound = 18;
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int prev[bound + 1];
//    int curr[bound + 1];
//    memset(prev, 0, sizeof (prev));
//    memset(curr, 0, sizeof(curr));
//    for (int i = 1; i <= bound; i+=2){
//        prev[i] = 1;
//    }
//    for (int i = 0; i < nums; i++){
//        for (int j = 1; j <= bound; j+=2){
//            for (int k = bound - j; k >= 0; k--){
//                curr[k + j] += prev[k];
//            }
//        }
//        for (int j = 0; j <= bound; j++) cout << curr[j] << " ";
//        cout << "\n";
//        for (int j = 0; j <= bound; j++) prev[j] = curr[j];
////        for (int j = 0; j <= bound; j++) cout << prev[j] << " ";
////        cout << "\n";
//        memset(curr, 0, sizeof(curr));
//    }
//}