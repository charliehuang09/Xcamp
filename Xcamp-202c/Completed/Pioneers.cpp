//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stack>
//#include <map>
//#include <stdio.h>
//#include <stack>
//#include <queue>
//using namespace std;
//vector<vector<int>> input;
//struct pos{
//    int x;
//    int y;
//};
//int dx[4] = {0,0,1,-1};
//int dy[4] = {1,-1,0,0};
//int a, b, n, m;
//bool inbound(pos input){
//    if (input.x < 0){
//        return false;
//    }
//    if (input.y < 0){
//        return false;
//    }
//    if (input.x >= n){
//        return false;
//    }
//    if (input.y >= m){
//        return false;
//    }
//    return true;
//}
//int main() {
//    // cin >> n >> m >> a >> b;
//    scanf("%d", &n);
//    scanf("%d", &m);
//    scanf("%d", &a);
//    scanf("%d", &b);
//    vector<int> t;
//    for (int i = 0; i < m; i++){//innitilize
//        t.push_back(2147483647);
//    }
//    for (int i = 0; i < n; i++){
//        input.push_back(t);
//    }
//    pos t1;
//    queue<pos> q;
//    for (int i = 0; i < a; i++){//infected
//        scanf("%d", &t1.x);
//        scanf("%d", &t1.y);
//        t1.x -= 1;
//        t1.y -= 1;
//        q.push(t1);
//        input[t1.x][t1.y] = 0;
//    }
//    while (!q.empty()){
//        pos pt = q.front();
//        q.pop();
//        for (int i = 0;i < 4; i++){
//            pos newpt;
//            newpt.x = pt.x + dx[i];
//            newpt.y = pt.y + dy[i];
//            if (inbound(newpt)){
//                if (input[pt.x][pt.y] + 1 < input[newpt.x][newpt.y]){
//                    input[newpt.x][newpt.y] = input[pt.x][pt.y] + 1;
//                    q.push(newpt);
//                }
//            }
//        }
//    }
////    cout << "\n";
////    for (int i = 0; i < input.size(); i++){
////        for (int j = 0; j < input[i].size(); j++){
////            cout << input[i][j] << " ";
////        }
////        cout << "\n";
////    }
//    for (int i = 0; i < b; i++){
//        int x, y;
//        scanf("%d", &x);
//        scanf("%d", &y);
//        // cout << input[x - 1][y - 1] << "\n";
//        printf("%d", (input[x-1][y-1]));
//        cout<<"\n";
//    }
//}