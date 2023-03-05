//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <climits>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//struct connection{
//    ll time;
//    ll ptr;
//    connection(ll time_, ll ptr_){
//        time = time_;
//        ptr = ptr_;
//    };
//};
//
//struct format{
//    ll index;
//    ll time;
//    format(ll index_, ll time_){
//        index = index_;
//        time = time_;
//    };
//    bool operator<(const format& rhs) const{
//        return time > rhs.time;
//    }
//};
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll cities, routes, a, b, c;
//    cin >> cities >> routes;
//    vector<connection> graph[cities];
//    for (ll i = 0; i < routes; i++){
//        cin >> a >> b >> c;
//        a--;
//        b--;
//        graph[a].push_back(connection(c, b));
//    }
//
//    ll dist[cities];
//    bool vis[cities];
//    for (ll i = 0; i < cities; i++){
//        dist[i] = 9223372036854775807;
//        vis[i] = false;
//    }
//    dist[0] = 0;
//    priority_queue<format> pq;
//    pq.push(format(0, 0));//index, time
////    cout << "cin done\n";
//    while(!pq.empty()){
//        format curr = pq.top();
//        pq.pop();
//        if (vis[curr.index]) continue;
//        vis[curr.index] = true;
//        for (ll i = 0; i < graph[curr.index].size(); i++){
//            if (dist[graph[curr.index][i].ptr] > dist[curr.index] + graph[curr.index][i].time){
//                dist[graph[curr.index][i].ptr] = dist[curr.index] + graph[curr.index][i].time;
//                pq.push(format(graph[curr.index][i].ptr, dist[graph[curr.index][i].ptr]));
//            }
//        }
//    }
//    for (ll i = 0; i < cities; i++){
//        cout << dist[i] << " ";
//    }
//
//}