//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//struct input_{
//    int val;
//    int cash;
//    input_(int val_, int cash_){
//        val = val_;
//        cash = cash_;
//    }
//};
//
//vector<vector<input_>> input;
//
//void Print2DVector(){
//    cout << "\n";
//    for (int i = 0; i < input.size(); i++){
//        for (int j = 0; j < input[i].size(); j++){
//            cout << input[i][j].cash << " ";
//        }
//        cout << "\n";
//    }
//    return;
//}
//
//int helper(int x, int y){
//    if (input[x][y].cash != -1) return input[x][y].cash;
//    if (x == input.size() - 1) return input[x][y].val;
//    int output;
//    output = max(helper(x + 1, y + 1), helper(x + 1, y)) + input[x][y].val;
//    input[x][y].cash = output;
//    return output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, t;
//    cin >> length;
//    vector<input_> temp;
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < i + 1; j++){
//            cin >> t;
//            temp.push_back(input_(t, -1));
//        }
//        input.push_back(temp);
//        temp.clear();
//    }
////    Print2DVector();
//    helper(0, 0);
//    cout << input[0][0].cash;
////    Print2DVector();
//
//}
////
//////o ( n ^ 2 / 2)