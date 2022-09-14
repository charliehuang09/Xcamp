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
//void Print2DVector (vector<vector<input_>> input){
//    for (int i = 0; i < input.size(); i++){
//        for (int j = 0; j < input[i].size(); j++){
//            cout << input[i][j].cash << " ";
//        }
//        cout << "\n";
//    }
//    return;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, t;
//    cin >> length;
//    vector<vector<input_>> input;
//    vector<input_> temp;
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < i + 1; j++){
//            cin >> t;
//            temp.push_back(input_(t, -1));
//        }
//        input.push_back(temp);
//        temp.clear();
//    }
//
////    Print2DVector(input);
//
//    for (int i = 0; i < input[input.size() - 1].size(); i++){
//        input[input.size() - 1][i].cash = input[input.size() - 1][i].val;
//    }
//
//    for (int i = input.size() - 2; i >= 0; i--){
//        for (int j = 0; j < input[i].size(); j++){
//            input[i][j].cash = max(input[i + 1][j].cash, input[i + 1][j + 1].cash) + input[i][j].val;
//        }
//    }
////    Print2DVector(input);
//    cout << input[0][0].cash;
//}
////o ( n ^ 2 / 2)