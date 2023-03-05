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
//bool compare(pair<string, int> a, pair<string, int> b){
//    return a.second > b.second;
//}
//
//void solve(){
//    ll length;
//    string s, e, c;
//    cin >> length >> c >> s >> e;
//    map<string, vector<string>> m;
//    set<string> docks;
//    for (ll i = 0; i < length; i++){
//        string x, y, z;
//        cin >> x;
//        if (x == "ROAD"){
//            cin >> y >> z;
//            m[y].push_back(z);
//            m[z].push_back(y);
//        }
//        else {
//            cin >> y;
//            docks.insert(y);
//        }
//    }
//
//    queue<string> q;
//    set<string> visited;
//    q.push(s);
//    visited.insert(s);
//    bool dock1 = false;
//    if (docks.find(s) != docks.end()) dock1 = true;
//    while(!q.empty()){
//        string curr = q.front();
//        vector<string> currConnections = m[curr];
//        q.pop();
//        for (int i = 0; i < currConnections.size(); i++){
//            if (docks.find(currConnections[i]) != docks.end()) dock1 = true;
//            string t = currConnections[i];
//            if (visited.find(currConnections[i]) == visited.end()){
//                visited.insert(currConnections[i]);
//                q.push(currConnections[i]);
//            }
//            if (currConnections[i] == e){
//                cout << "The trip's free!\n";
//                return;
//            }
//        }
//    }
//
//    if (!dock1){
//        cout << "Just stay home\n";
//        return;
//    }
//
//    q.push(e);
//    visited.clear();
//    visited.insert(e);
//    if (docks.find(e) != docks.end()){
//        cout << "Bring $" << c << " for the trip.\n";
//        return;
//    }
//    while(!q.empty()){
//        string curr = q.front();
//        vector<string> currConnections = m[curr];
//        q.pop();
//        for (int i = 0; i < currConnections.size(); i++){
//            if (docks.find(currConnections[i]) != docks.end()){
//                cout << "Bring $" << c << " for the trip.\n";
//                return;
//            }
//            if (visited.find(currConnections[i]) == visited.end()){
//                visited.insert(currConnections[i]);
//                q.push(currConnections[i]);
//            }
//        }
//    }
//
//    cout << "Just stay home\n";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
////    ll a, b;
////    char df;
////    string c;
////    cin >> a >> df >> b >> c;
////    cout << a << " " << df << " " << b << " " << c;
//
//    ll length;
//    cin >> length;
//    for (ll i = 0; i < length; i++){
//        solve();
//    }
//
//}