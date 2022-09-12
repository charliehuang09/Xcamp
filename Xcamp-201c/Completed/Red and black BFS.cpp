///******************************************************************************
//
//2021-fa-201-wk9-bfs-num-ways
//
//*******************************************************************************/
//#include<bits/stdc++.h>
//using namespace std;
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//struct PNT { // define struct to push to queue
//	int x, y;
//	PNT (int x0, int y0) : x(x0), y(y0){};
//};
//queue<PNT> q;
//
//int main() {
//    int sx,sy,row,colm;
//    string temp;
//    cin >> row >> colm;
//    int visited[colm][row];
//    vector<string> board;
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            visited[i][j] = 0;
//        }
//        cin >> temp;
//        board.push_back(temp);
//    }
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            if (board[i][j] == '@'){
//                sx = i;
//                sy = j;
//                board[i][j] = '.';
//            }
//        }
//    }
//    queue<PNT> q;
//    q.push(PNT(sx,sy));
//    long long ans = 0;
//    while(!q.empty()) {
//        ans++;
//        PNT pt = q.front();
//        q.pop(); // remove front
//
//        for(int i = 0; i < 4; i++) {
//            int nx = pt.x + dx[i];
//            int ny = pt.y + dy[i];
//            if (nx >= 0 && nx < colm && ny >= 0 && ny < row && board[nx][ny] != '#'){
//                //cout << "pog";
//                if (visited[nx][ny] == 0) { // first time to be here
//                    visited[nx][ny] = 1;
//                    q.push(PNT(nx, ny));
//                }
//            }
//        }
//    }
//    for (int i = 0; i < colm; i++){
//        for (int j = 0; j < row; j++){
//            if (board[i][j] == 1){
//                ans++;
//            }
//        }
//    }
//    if (ans == 1 || 0){
//        cout << 1;
//        return 0;
//    }
//    ans--;
//    cout << ans;
//}
//
//
