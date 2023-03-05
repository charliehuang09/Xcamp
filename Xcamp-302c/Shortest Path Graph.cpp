//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define INT_MAX 2147483647
//#define ll long long
//using namespace std;
//vector<int> graph[80000];
//int dist[80000];
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, nodes;
//    cin >> nodes >> length;
//    for (int i = 0; i < length; i++){
//        int a, b;
//        cin >> a >> b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//    }
//    int s, e;
//    cin >> s >> e;
//    queue<int> q;
//    q.push(s);
//    dist[s] = 1;
//    while(!q.empty()){
//        int curr = q.front();
//        q.pop();
//        for (int i = 0; i < graph[curr].size(); i++){
//            if (dist[graph[curr][i]] == 0){
//                dist[graph[curr][i]] = dist[curr] + 1;
//                q.push(graph[curr][i]);
//                continue;
//            }
//            if (dist[graph[curr][i]] > dist[curr] + 1){
//                dist[graph[curr][i]] = dist[curr] + 1;
//                q.push(graph[curr][i]);
//                continue;
//            }
//        }
//    }
//    cout << dist[e] - 1;
//}