//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <cmath>
//#include <unordered_map>
//
//#define long long long
//using namespace std;
//
//long n;
//long *rooms;
//const long MAXN = 5e6 + 5;
//
//unordered_map<long, bool> dp;
//
//template<long N>
//struct Sieve {
//    bool is_prime[N];
//    constexpr Sieve() : is_prime() {
//        for (long i = 2; i < N; i++) {
//            is_prime[i] = true;
//        }
//        for (long i = 2; i < N; i++) if (is_prime[i]) {
//            for (long j = 2 * i; j < N; j += i) {
//                is_prime[j] = false;
//            }
//        }
//    }
//};
//
//bool is_prime(long num) {
//    static auto it = Sieve<MAXN>();
//    return it.is_prime[num];
//}
//
//inline long gm4_prime(long num) {
//    for (long i = 0; i < num; i += 4) {
//        if (is_prime(num - i)) return num - i;
//    }
//    return 1;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    long T;
//    cin >> T;
//    while (T--) {
//        cin >> n;
//        rooms = new long[n];
//        for (long i = 0; i < n; i++) {
//            cin >> rooms[i];
//        }
//        long minMoves = MAXN;
//        for (long i = 0; i < n; i++) {
//            if (rooms[i] % 2 == 1) {
//                long amt = (rooms[i] - gm4_prime(rooms[i])) / 2 + 1;
//                if (amt / 2 < minMoves / 2) minMoves = amt;
//            } else {
//                long amt = rooms[i] / 2;
//                if (amt / 2 < minMoves / 2) minMoves = amt;
//            }
//        }
//        delete[] rooms;
//        if (minMoves % 2 == 0) printf("Farmer Nhoj\n");
//        else printf("Farmer John\n");
//    }
//}