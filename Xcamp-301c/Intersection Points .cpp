//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define horiz true
//#define vert false
//#define start true
//#define end_ false
//using namespace std;
//using ll = long long;
//const string albert = "Albert is a Furry";
//
//struct line{
//    bool dir;//vert horiz
//    int up, down;
//    int left, right;
//    int height, width;
//    line(bool dir, int a, int b){
//        if (dir == horiz){
//
//        }
//    }
//};
//
//bool compare(line a, line b){
//    return a.index < b.index;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length,a,b,c,d;
//    cin >> length;
//    vector<line> input;
//    for (int i = 0; i < length; i++){
//        cin >> a >> b >> c >> d;
//        if (a == c){//vert
//            input.emplace_back(vert, false, a, b, d);
//        }
//        else{
//            input.emplace_back(horiz, start, a, 0, 0);
//            input.emplace_back(horiz, end_, c, 0, 0);
//        }
//    }
//
//    sort(input.begin(), input.end(), compare);
//
//    queue<int> activeSet;
//    for (int i = 0; i < input.size(); i++) {
//        if (input[i].dir == horiz){
//            activeSet.push_back(input[i].)
//        }
//    }
//
//    return 0;
//
//}