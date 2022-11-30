//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <queue>3
//using namespace std;
//
//int dx[8] = { -2, -1, 1, 2,  2,  1, -2, -1};
//int dy[8] = {  1,  2, 2, 1, -1, -2, -1, -2};
//
//struct PNT { // define struct to push to queue
//    int x, y;
//    PNT (int x0, int y0) : x(x0), y(y0){};
//};
//int main(int argc, const char * argv[]) {
//    queue<PNT> q;
//    int sizex,sizey,sx,sy;
//    cin >> sizex >> sizey >> sx >> sy;
//    sx--;
//    sy--;
//    int visited[sizex][sizey];
//    int dist[sizex][sizey];
//    for (int i = 0; i < sizex; i++){
//        for (int j = 0; j < sizey; j++){
//            visited[i][j] = 0;
//            dist[i][j] = -1;
//        }
//    }
//
//    visited[sx][sy] = 1;
//    dist[sx][sy] = 0;
//    q.push(PNT(sx,sy));
//
//    while(!q.empty()) {
//        PNT pt = q.front();
//        q.pop(); // remove front
//
//        for(int i = 0; i < 8; i++) {
//            int nx = pt.x + dx[i];
//            int ny = pt.y + dy[i];
//
//            if (nx >= 0 && nx < sizex && ny >= 0 && ny < sizey && visited[nx][ny] == 0) { // can move
//                visited[nx][ny] = 1;
//                dist[nx][ny] = dist[pt.x][pt.y] + 1; // shortest path to this pos
//                q.push(PNT(nx, ny));
//            }
//        }
//    }
//    for (int i = 0; i < sizex; i++){
//        for (int j = 0; j < sizey; j++){
//            cout << dist[i][j] << " ";
//        }
//        cout << "\n";
//    }
////    cout << "No solution"; // if can't reach end point
//}
///*
//10
//3 6
//1 9
//
//3
//*/