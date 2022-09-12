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
//struct gopher{
//    int time;
//    int value;
//};
//
////bool compare(gopher a, gopher b){
////    if (a.time == b.time) return a.value > b.value;
////    return a.time < b.time;
////}
//
//bool compare(gopher a, gopher b){
//    return a.value > b.value;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    vector<gopher> gophers(length);
//    for (int i = 0; i < length; i++){
//        cin >> gophers[i].time;
//    }
//    for (int i = 0; i < length; i++){
//        cin >> gophers[i].value;
//    }
//
//    sort(gophers.begin(), gophers.end(), compare);
//
//    int output = 0;
//    bool used[100000];
//    memset(used, false, sizeof(used));
//    for (int i = 0; i < length; i++){
//        while(gophers[i].time > 0 && used[gophers[i].time]){
//            gophers[i].time--;
//        }
//        if (gophers[i].time != 0){
//            used[gophers[i].time] = true;
//            output += gophers[i].value;
//        }
//    }
//    cout << output;
//    return 0;
//}
