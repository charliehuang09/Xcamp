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
//int dx[8] = {1, 1, 0, 0, -1, -1, 1, 1};
//int dy[8] = {0, 1, 0, 1, 1, -1, 1, -1};
//int l;
//
//bool inbound(int x, int y){
//    if (x < 0) return false;
//    if (y < 0) return false;
//    if (x >= l) return false;
//    if (y >= l) return false;
//    return true;
//}
//
//vector<vector<int>> fill(vector<vector<int>> input, int x, int y){
//    for (int i = 0; i < input[x].size(); i++) input[x][i] = 1;//filled
//    for (int i = 0; i < input.size(); i++) input[i][y] = 1;//filled
//    for (int i = 1; i < l; i++){
//        for (int j = 0; j < 8; j++){
//            if (inbound(dx[j] * i + x, dy[j] * i + y) && input[dx[j] * i + x][dy[j] * i + y] != 2) input[dx[j] * i + x][dy[j] * i + y] = 1;
//        }
//    }
//    return input;
//}
//
//void print(vector<vector<int>> input){
//    for (int i = 0; i < l; i++){
//        for (int j = 0; j < l; j++){
////            cout << input[i][j] << ' ';
//            if (input[i][j] == 2) cout << 'O';
//            else cout << '.';
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//void solve(vector<vector<int>> input, int index, int newX, int newY){
//    if (index == l){
////        cout << 123;
//        input[newX][newY] = 2;
//        print(input);
//        return;
//    }
//    input = fill(input, newX, newY);
//    input[newX][newY] = 2;
////    print(input);
//    for (int i = 0; i < input[index].size(); i++){
//        if (input[index][i] == 0) solve(input, index + 1, index, i);
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> l;
//    if (l == 1){
//        cout << 'O';
//        return 0;
//    }
////    l = 10;
//    vector<vector<int>> t(l , vector<int> (l, 0));
//    for (int i = 0; i < l; i++) solve(t, 1, 0, i);
////    solve(t, 1, 0, 1);
//}