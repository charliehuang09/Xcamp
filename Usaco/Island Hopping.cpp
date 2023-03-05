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
//int d1[4] = {1, 1, -1, -1};
//int d2[4] = {-1, 1, -1, 1};
//int input[100][100];
//int visit[100][100];
//int n, m, k1, k2, sx, sy;
//
//void print(){
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            cout << input[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//bool inbound(int x, int y){
//    if (x < 0) return false;
//    if (y < 0) return false;
//    if (x >= n) return false;
//    if (y >= m) return false;
//    return true;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    memset(visit, -1, sizeof(visit));
//
//    cin >> n >> m >> k1 >> k2;
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            cin >> input[i][j];
//            if (input[i][j] == 3){
//                sx = i;
//                sy = j;
//            }
//        }
//    }
//    queue<int> qx;
//    queue<int> qy;
//    qx.push(sx);
//    qy.push(sy);
//    visit[sx][sy] = 0;
//
//    while(!qx.empty()){
//        int x = qx.front();
//        int y = qy.front();
//        qx.pop();
//        qy.pop();
////        print();
//        for (int i = 0; i < 4; i++){
//            int newx = x + d1[i] * k1;
//            int newy = y + d2[i] * k2;
//            if (input[newx][newy] == 4){
//                cout << visit[x][y] + 1;
//                return 0;
//            }
//            if (input[newx][newy] == 1 && visit[newx][newy] == -1 && inbound(newx, newy)){
//                visit[newx][newy] = visit[x][y] + 1;
//                input[newx][newy] = 0;
//                qx.push(newx);
//                qy.push(newy);
//            }
//            newx = x + d2[i] * k2;
//            newy = y + d1[i] * k1;
//            if (input[newx][newy] == 4){
//                cout << visit[x][y] + 1;
//                return 0;
//            }
//            if (input[newx][newy] == 1 && visit[newx][newy] == -1 && inbound(newx, newy)){
//                visit[newx][newy] = visit[x][y] + 1;
//                input[newx][newy] = 0;
//                qx.push(newx);
//                qy.push(newy);
//            }
//        }
////        print();
//    }
//
//    return 0;
//}