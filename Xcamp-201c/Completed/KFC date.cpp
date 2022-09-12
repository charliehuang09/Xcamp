//#include<bits/stdc++.h>
//using namespace std;
//
//// int maze[5][5] = {{0,0,0,0,0 },
////                   {0,1,0,1,0 },
////                   {0,1,0,1,0 },
////                   {0,1,0,1,0 },
////                   {0,0,0,0,0 } };
//
//// int visited[5][5] = {{0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                     {0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 }};
//
//// int dist[5][5] =    {{0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 }};
//
//// int ways[5][5] =    {{0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 },
////                      {0,0,0,0,0 }};
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//struct PNT { // define struct to push to queue
//	int x, y;
//	PNT (int x0, int y0) : x(x0), y(y0){};
//};
//
//
//int main() {
//    int sx = 0, sy =0,colm,row;
//    cin >> colm >> row;
//    vector<string> maze;
//    int visited1[colm][row];
//    int ways1[colm][row];
//    int dist1[colm][row];
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            visited1[i][j] = 0;
//            ways1[i][j] = 0;
//            dist1[i][j] = 0;
//        }
//    }
//    string temp;
//    for (int i = 0; i < colm; i++){
//        cin >> temp;
//        maze.push_back(temp);
//    }
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            if (maze[i][j] == '@'){
//                sx = i;
//                sy = j;
//            }
//        }
//    }
//    visited1[sx][sy] = 1;
//    ways1[sx][sy] = 1;
//    queue<PNT> q;
//    q.push(PNT(sx,sy));
//    while(!q.empty()) {
//        PNT pt = q.front();
//        q.pop(); // remove front
//
//        for(int i = 0; i < 4; i++) {
//            int nx = pt.x + dx[i];
//            int ny = pt.y + dy[i];
//
//            if (nx >= 0 && nx < colm && ny >= 0 && ny < row && maze[nx][ny] != '#') { // can move, no need to check visited
//
//                if (visited1[nx][ny] == 0) { // first time to be here
//                    dist1[nx][ny] = dist1[pt.x][pt.y] + 1; // shortest path to this pos
//                    ways1[nx][ny] = ways1[pt.x][pt.y];
//                    visited1[nx][ny] = 1;
//                    q.push(PNT(nx, ny));
//                }
//                else if (dist1[nx][ny] == dist1[pt.x][pt.y] + 1)
//                    ways1[nx][ny] += ways1[pt.x][pt.y]; // need to add new ways
//            }
//        }
//    }
//    int visited2[colm][row];
//    int ways2[colm][row];
//    int dist2[colm][row];
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            visited2[i][j] = 0;
//            ways2[i][j] = 0;
//            dist2[i][j] = 0;
//        }
//    }
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            if (maze[i][j] == '&'){
//                sx = i;
//                sy = j;
//            }
//        }
//    }
//    visited2[sx][sy] = 1;
//    ways2[sx][sy] = 1;
//    q.push(PNT(sx,sy));
//    while(!q.empty()) {
//        PNT pt = q.front();
//        q.pop(); // remove front
//
//        for(int i = 0; i < 4; i++) {
//            int nx = pt.x + dx[i];
//            int ny = pt.y + dy[i];
//
//            if (nx >= 0 && nx < colm && ny >= 0 && ny < row && maze[nx][ny] != '#') { // can move, no need to check visited
//
//                if (visited2[nx][ny] == 0) { // first time to be here
//                    dist2[nx][ny] = dist2[pt.x][pt.y] + 1; // shortest path to this pos
//                    ways2[nx][ny] = ways2[pt.x][pt.y];
//                    visited2[nx][ny] = 2;
//                    q.push(PNT(nx, ny));
//                }
//                else if (dist2[nx][ny] == dist2[pt.x][pt.y] + 1)
//                    ways2[nx][ny] += ways2[pt.x][pt.y]; // need to add new ways
//            }
//        }
//    }
//    //cout << "\n\n\n\n\n";
//    // for (int i = 0; i < colm; i++){
//    //     for (int j = 0; j < row; j++){
//    //         cout << dist2[i][j] << " ";
//    //     }
//    //     cout << "\n";
//    // }
//
//
//    long long int ans = 2147483647;
//
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//           if (maze[i][j] == 'F'){
//               if (dist1[i][j] + dist2[i][j] < ans && dist1[i][j] + dist2[i][j] != 0){
//                   if (dist1[i][j] != 0 && dist2[i][j] != 0){
//                       ans = dist1[i][j] + dist2[i][j];
//                   }
//               }
//           }
//        }
//    }
//    if (ans == 2147483647){
//        cout << "Meeting cancelled";
//        return 0;
//    }
//    cout << ans;
//    //cout << "\n\n\n\n" << ans;
//}
//
//
