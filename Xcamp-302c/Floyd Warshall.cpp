//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//// #define INT_MAX 2147483647
//#define ll long long
//using namespace std;
//vector<pair<int, int>> graph[100000];
//int dist[100000];
//void reset(){
//    for (int i = 0; i < 100000; i++){
//        graph[i].clear();
//        dist[i] = 0;
//    }
//}
//void solve(){
//    reset();
//    int v, e;
//    cin >> v >> e;
//    for (int i = 0; i < e; i++){
//        int a, b, c;
//        cin >> a >> b >> c;
//        a--;
//        b--;
//        graph[a].emplace_back(b, c);
//    }
//
//    for (int i = 0; i < v - 1; i++){
//        for (int j = 0; j < v; j++){
//            for (int k = 0; k < graph[j].size(); k++){
//                dist[graph[j][k].first] = min(dist[graph[j][k].first], dist[j] + graph[j][k].second);
////                    dist[j] = min(dist[j], dist[graph[j][k].first] + graph[j][k].second);
//            }
//        }
//    }
//
//    for (int j = 0; j < v; j++){
//        for (int k = 0; k < graph[j].size(); k++){
//            cout << dist[graph[j][k].first] << " " << dist[k] << " " << graph[j][k].second << endl;
//            if (dist[graph[j][k].first] > dist[j] + graph[j][k].second){
//                cout << "YES\n";
//                return;
//            }
//        }
//    }
//    cout << "NO\n";
//}
///*
//3
//1 1
//1 1 -1
//4 4
//1 2 1
//2 1 1
//3 4 -2
//4 3 1
//4 4
//1 2 1
//2 3 1
//3 4 1
//4 1 1
// */
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int testcases;
//    cin >> testcases;
//    for (int i = 0; i < testcases; i++) solve();
//}