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
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a1, b1, c1, d1;
//    int a2, b2, c2, d2;
//    cin >> a1 >> b1 >> c1 >> d1;
//    cin >> a2 >> b2 >> c2 >> d2;
//    int x1max = max(a1, c1);
//    int x2max = max(a2, c2);
//    int y1max = max(b1, d1);
//    int y2max = max(b2, d2);
//    int x1min = min(a1, c1);
//    int x2min = min(a2, c2);
//    int y1min = min(b1, d1);
//    int y2min = min(b2, d2);
//
//    int max1 = max(x1max - x1min, y1max - y1min);
//    int max2 = max(x2max - x2min, y2max - y2min);
//    int max3 = max(x1max - x2min, y1max - y2min);
//    int max4 = max(x2max - x1min, y2max - y1min);
//
//    int output = max(max(max3, max4), max(max1, max2));
//    cout << output * output;
//}
////6 6 8 8
////1 8 4 9