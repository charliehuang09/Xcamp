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
//const string albert = "Albert is a Furry\n";
//int output;
//string input[1000000];
//int n, m;
//bool inbound (int x, int y){
//    if (x < 0) return false;
//    if (y < 0) return false;
//    if (x >= n) return false;
//    if (y >= m) return false;
//    return true;
//}
//void solve(int x, int y, int dir){//1 == down, 2 == up, 3 == left, 4 == rigth
//    if (!inbound(x, y)) return;
//    output++;
////    cout << x << " " << y << "\n";
//    if (dir == 1){
//        if (input[x][y] == '/'){
//            solve(x, y + 1, 3);
//        }
//        else{
//            solve(x, y - 1, 4);
//        }
//    }
//    if (dir == 2){
//        if (input[x][y] == '/'){
//            solve(x, y - 1, 4);
//        }
//        else{
//            solve(x, y + 1, 3);
//        }
//    }
//    if (dir == 3){
//        if (input[x][y] == '/'){
//            solve(x - 1, y, 1);
//        }
//        else{
//            solve(x + 1, y, 2);
//        }
//    }
//    if (dir == 4){
//        if (input[x][y] == '/'){
//            solve(x + 1, y, 2);
//        }
//        else{
//            solve(x - 1, y, 1);
//        }
//    }
//}
//int main(){
//    int out = -1;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) cin >> input[i];
//
//    for (int i = 0; i < n; i++){
//        output = 0;
//        solve(i, 0, 3);
//        out = max(out, output);
//        output = 0;
//        solve(i, m-1, 4);
//        out = max(out, output);
//    }
////    cout << "\n\n\n";
//    for (int i = 0; i < m; i++){
//        output = 0;
//        solve(0, i, 2);
//        out = max(out, output);
//        output = 0;
//        solve(n-1, i, 1);
//        out = max(out, output);
//    }
//    cout << out;
//}