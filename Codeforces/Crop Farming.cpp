//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//
//#define ll long long
//using namespace std;
//
//int dp[205][205];
//int inp[205][205];
//
//int n, m;
//
//const int dx[] = {1, 0};
//const int dy[] = {0, 1};
//
//inline bool in_bounds(int x, int y) {
//    return x >= 0 && y >= 0 && x < m && y < n;
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    cin >> m >> n;
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> inp[i][j];
//        }
//    }
//
//    for (int i = 0; i < 205; i++) {
//        fill(dp[i], dp[i] + 205, INT_MAX);
//    }
//
//    struct head {
//        int x;
//        int y;
//        int labor;
//    };
//    queue<head> q;
//    q.push(head{0, 0, inp[0][0]});
//
//    while (!q.empty()) {
//        head f = q.front();
//        q.pop();
//        if (f.x == m - 1 && f.y == n - 1) continue;
//        for (int i = 0; i < 2; i++) {
//            int nx = f.x + dx[i], ny = f.y + dy[i];
//            if (!in_bounds(nx, ny)) continue;
//            if (dp[nx][ny] < f.labor + inp[nx][ny]) continue;
//            q.push(head{nx, ny, f.labor + inp[nx][ny]});
//            dp[nx][ny] = f.labor + inp[nx][ny];
//        }
//    }
//    cout << dp[m-1][n-1] << '\n';
//}