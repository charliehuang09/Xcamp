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
//int n, k, d;
//int *loaf;
//
//int solve(int day, int rem){
//    if(day >= n  || rem == 0) return 0;
//    int now = 0;
//    for(int i = day; i < d + day; i++){
//        if(loaf[i] == 0 || i >= n) break;
//        now += loaf[i];
//    }
//    int usenow = solve(day + d, rem - 1);
//    int notusenow = solve(day + 1, rem);
//    //cout << day << " " << now << " " << usenow << " " << notusenow << endl;
//    return max(now + usenow, notusenow);
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int t;
//    cin >> t;
//    while(t--){
//
//        cin >> n >> k >> d;
//        loaf = new int[n];
//        for(int i = 0; i < n; i++){
//            cin >> loaf[i];
//        }
//        cout << solve(0, k) << endl;
//        delete[] loaf;
//
//    }
//}