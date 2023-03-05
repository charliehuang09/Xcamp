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
//
//map<int, char> key;
//
//struct format{
//    int type;
//    int v;
//    int e;
//};
//
//bool compare(format a, format b){
//    if (a.v == b.v) return a.type < b.type;
//    return a.v < b.v;
//}
//
//int main(){
//    key[0] = 'p';
//    key[1] = 's';
//    key[2] = 'e';
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int times, length, t, s, e;
//    cin >> times >> length;
//    map<int, int> ends;
//    vector<format> points;
//    for (int i = 0; i < times; i++){
//        cin >> t;
//        points.push_back({1, t, -1});
//    }
//
//    for (int i = 0; i < length; i++){
//        cin >> s >> e;
//        points.push_back({0, s, e});
//        ends[s] = e;
//        points.push_back({2, e, -1});
//    }
//    sort(points.begin(), points.end(), compare);
//    multiset<int> active;
//    int output = 0;
//    int latest = 0;
//
//    for (int i = 0; i < points.size(); i++){
////        cout << key[points[i].type] << " " << points[i].v << "\n";
//        if (points[i].type == 0){
//            active.insert(points[i].e);
//            continue;
//        }
//        if (points[i].type == 2 && *active.begin() == points[i].v){
//            active.erase(active.begin());
//            continue;
//        }
//        if (!active.empty() && points[i].type == 1){
////            cout << key[points[i].type] << " " << points[i].v << "\n";
//            active.erase(active.begin());
//            latest = points[i].v;
//            output++;
//        }
//    }
//    cout << output << " " << latest;
//
//    return 0;//
//}