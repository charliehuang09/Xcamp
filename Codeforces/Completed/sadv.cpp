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
//using namespace std;
//
//#define int long long
//
//int n, k, d;
//vector<vector<int>> bags;
//int out;
//
//// bag dping on, current idx in bag, current total bread;
//void per_bag(int bidx, int idx, int cards, int tot) {
//    out = max(out, tot);
//    cards--;
//    if (bidx >= bags.size() || cards < 0) return;
//    if (idx >= bags[bidx].size() || d >= bags[bidx].size()) goto Tail;
//    for (int i = idx; i <= bags[bidx].size() - d; i++) {
//        per_bag(bidx, idx + d, cards, tot + bags[bidx][i + d - 1] - bags[bidx][i - 1]);
//    }
//    Tail:
//    per_bag(bidx + 1, 1, cards + 1, tot);
//    if (d >= bags[bidx].size()){
//        int t = tot + *bags[bidx].rbegin();
//        int td = d;
//        while (td >= bags[bidx].size() && bidx < bags.size()){
//            td -= bags[bidx].size();
//            bidx++;
//        }
//        per_bag(bidx + 1, td, cards, t);
//    }
//}
//
//signed main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        bags.clear();
//        out = 0;
//        cin >> n >> k >> d;
//        vector<int> cur;
//        cur.push_back(0);
//        for (int i = 0; i < n; i++) {
//            int c;
//            cin >> c;
//            if (c == 0 && cur.size() > 1) {
//                bags.push_back(cur);
//                cur.clear();
//                cur.push_back(0);
//                continue;
//            }
//            if (c != 0) cur.push_back(c);
//        }
//        if (cur.size() > 1) bags.push_back(cur);
//        for (int i = 0; i < bags.size(); i++){
//            for (int j = 1; j < bags[i].size(); j++){
//                bags[i][j] += bags[i][j - 1];
//            }
//        }
//
//        per_bag(0, 1, k, 0);
//
//        cout << out << '\n';
//        bags.clear();
//    }
//    return 0;
//}
///*
//1
//7 2 3
//0 100 0 100 5 6 7
// */