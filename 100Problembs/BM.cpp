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
//int board[2005][2005];
//
//void print_board(){
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j < 20; j++){
//            cout << board[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    const int bias = 1000;
//    int a, b, c, d;
//    cin >> a >> b >> c >> d;
//    a += bias;
//    b += bias;
//    c += bias;
//    d += bias;
//    for (int i = b; i < d; i++){//1 4
//        for (int j = a; j < c; j++){//2 7
//            board[i][j] = 1;
//        }
//    }
//    int e, f, g, h;
//    cin >> e >> f >> g >> h;
//    e += bias;
//    f += bias;
//    g += bias;
//    h += bias;
//    for (int i = f; i < h; i++){
//        for (int j = e; j < g; j++){
//            board[i][j] = 2;
//        }
//    }
////    print_board();
////    return 0;
//    int l1, l2, t;
//    l1=0;
//    l2=0;
//
//    for (int i = b; i < d; i++){
//        if (board[i][a] == 1){
//            t = i;
//            break;
//        }
//    }
//    for (int i = d; i >= b; i--){
//        if (board[i][a] == 1){
//            l1 = i - t + 1;
//            break;
//        }
//    }
//
//    for (int i = b; i < d; i++){
//        if (board[i][c - 1] == 1){
//            t = i;
//            break;
//        }
//    }
//    for (int i = d; i >= b; i--){
//        if (board[i][c - 1] == 1){
//            l2 = i - t + 1;
//            break;
//        }
//    }
//
//    int w1, w2;
//    w1=0;
//    w2=0;
//    for (int i = a; i < c; i++){
//        if (board[b][i] == 1){
//            t = i;
//            break;
//        }
//    }
//    for (int i = c; i >= a; i--){
//        if (board[b][i] == 1){
//            w1 = i - t + 1;
//            break;
//        }
//    }
//
//    for (int i = a; i < c; i++){
//        if (board[d-1][i] == 1){
//            t = i;
//            break;
//        }
//    }
//    for (int i = c; i >= a; i--){
//        if (board[d-1][i] == 1){
//            w2 = i - t + 1;
//            break;
//        }
//    }
////    cout << l1 << " " << l2 << " " << w1 << " " << w2 << "\n";
//    cout << max(l1, l2) * max(w1, w2);
//}