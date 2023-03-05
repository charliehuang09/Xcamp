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
//    int length;
//    cin >> length;
//    int input[length];
//    for (int i = 0; i < length; i++) cin >> input[i];
//
//    int l = 0;
//    int r = length - 1;
//    int lMax = input[0];
//    int rMax = input[length - 1];
//
//    while(l < r){
//        cout << l << " " << r << " " << lMax << " " << rMax << "\n";
//        if (lMax < rMax || lMax >= input[l + 1]){
//            l++;
//            lMax = max(lMax, input[l]);
//        }
//        else{
//            r--;
//            rMax = max(rMax, input[r]);
//        }
//
//        if (lMax == rMax){
//            int currMin = INT_MAX;
//            for (int i = l + 1; i < r; i++){
//                currMin = min(currMin, input[i]);
//            }
//            if (currMin == lMax){
//                cout << "YES\n";
//                cout << l + 1 << " " << length - (l + 1) - (length - r) << " " << length - r << "\n\n";
//                return;
//            }
//        }
//    }
//    cout << "NO\n";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        solve();
//    }
//
//}