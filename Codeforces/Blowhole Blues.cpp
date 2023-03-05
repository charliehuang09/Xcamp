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
//
//void solve(){
//    int length, k;
//    cin >> length >> k;
//    int input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    sort(input, input + length);
//    int l = 0;
//    int h = 0;
//    int output = 0;
//        while(h != length - 1){
//        output = max(output, h - l + 1);
//        if (input[h + 1] - input[l] <= k){
//            h++;
//            output = max(output, h - l + 1);
//            continue;
//        }
//        if (h == l) h++;
//        l++;
//        output = max(output, h - l + 1);
//    }
//    cout << length - output << '\n';
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        solve();
//    }
//}