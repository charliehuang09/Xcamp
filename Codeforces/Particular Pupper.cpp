//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <cmath>
//#include <unordered_map>
//
//using namespace std;
//#define int unsigned long long
//int n, x, y, mod = 1000000007, s = 0;
//
//bool isGood(int i) {
//    int t = (x * i) + (y * (n - i));
//    while (t > 0) {
//        if (t % 10 != x && t % 10 != y) {
//            return false;
//        } else {
//            t /= 10;
//        }
//    }
//    return 1;
//}
//
//int po(int b, int e) {
//    if (e >= 2) {
//        int x = po(b, e / 2);
//        return ((x * x) % mod) * (e % 2 ? b : 1) % mod;
//    } else {
//        return (e % 2 ? b : 1) % mod;
//    }
//}
//
//int choose(int i) {
//    int top = 1, bottom = 1;
//    for (int j = n - i + 1; j <= n; j++) {
//        top *= j;
//        top %= mod;
//    }
//    for (int j = 1; j <= i; j++) {
//        bottom *= j;
//        bottom %= mod;
//    }
//    bottom = po(bottom, mod - 2);
//    return (top * bottom) % mod;
//}
//
//signed main() {
//    cin >> x >> y >> n;
//    if (x == y) {
//        if (isGood(x * n) == 1) {
//            cout << 1;
//        } else {
//            cout << 0;
//        }
//        return 0;
//    }
//    for (int i = 0; i <= n; i++) {
//        //cout << isGood(i) << ' ';
//        if (isGood(i) == 1) {
//            s += choose(i);
//            s %= mod;
//        }
//    }
//    cout << s;
//}