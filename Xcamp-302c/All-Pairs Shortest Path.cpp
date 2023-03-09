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
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll n;
//    cin >> n;
//    ll graph[n][n];
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            cin >> graph[i][j];
//        }
//    }
//    for (int k = 0; k < n; k++){
//        for (int i = 0; i < n; i++){
//            for (int j = 0 ; j < n; j++){
//                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
//            }
//        }
//    }
//    for (int k = 0; k < n; k++) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (graph[i][j] > graph[i][k] + graph[k][j]) {
//                    cout << "No Solution";
//                    return 0;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < n; j++){
//            cout << graph[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//
//}
///*
//3
//-1 1 2
//-1 0 0
//2 1 0
// */