//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define INT_MAX 214748364
//#define ll long long
//using namespace std;
////int graph[5][5];
////bool valid[5][5];
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll n, e, q;
//    cin >> n >> e >> q;
//    ll graph[n][n];
//    bool valid[n][n];
//    memset(graph, 0, sizeof(graph));
//    memset(valid, false , sizeof(valid));
//    for (int i = 0; i < e; i++){
//        int a, b, w;
//        cin >> a >> b >> w;
//        a--; b--;
//        valid[a][b] = valid[b][a] = true;
//        if (graph[a][b] == 0) graph[b][a] = graph[a][b] = w;
//        else graph[b][a] = graph[a][b] = min(graph[b][a], (ll)w);
//    }
//    for (int i = 0; i < n; i++) {
//        graph[i][i] = 0;
//        valid[i][i] = true;
//    }
//    for (int t = 0; t <= n; t++){
//        for (int i = 0; i < n; i++){
//            for (int j = 0; j < n; j++){
//                if (i == j) continue;
//                for (int k = 0 ; k < n; k++){
////                    if (k == i || k == j) continue;
//                    if (valid[i][k] && valid[j][k]){
//                        if (graph[i][j] == 0) graph[i][j] = graph[j][i] = graph[i][k] + graph[j][k], valid[i][j] = valid[j][i] = true;
//                        else graph[i][j] = graph[j][i] = min(graph[i][j], graph[i][k] + graph[j][k]);
//                    }
//                }
//            }
//        }
//    }
////    for (int i = 0; i < n; i++){
////        for (int j = 0; j < n; j++){
////            if (graph[i][j] == INT_MAX) cout << "0 ";
////            else cout << graph[i][j] << " ";
////        }
////        cout << endl;
////    }
//    for (int i = 0; i < q; i++){
//        int a, b;
//        cin >> a >> b;
//        a--; b--;
//        if (graph[a][b] == 0) cout << -1;
//        else cout << graph[a][b];
//        cout << "\n";
//    }
//
//}
///*
//5 5
//1 2 1
//2 3 1
//3 4 1
//4 5 1
//5 1 1
// */