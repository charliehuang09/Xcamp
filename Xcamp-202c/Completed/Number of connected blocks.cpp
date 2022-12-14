//#include <algorithm>
//#include <bitset>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <stack>
//#include <stdio.h>
//#include <stdlib.h>
//#include <vector>
//
//using namespace std;
//
//int output = 0;
//
//int main() {
//
//    int nodes, edges;
//    cin >> nodes >> edges;
//
//    vector<int> graph[nodes];
//
//    int node1, node2;
//    for (int i = 0; i < edges; i++){
//        cin >> node1 >> node2;
//        node1--;
//        node2--;
//        graph[node1].push_back(node2);
//        graph[node2].push_back(node1);
//    }
//
//    bool all_visited[nodes];
//    for (int i = 0; i < nodes; i++){
//        all_visited[i] = false;
//    }
//
//    for (int i = 0; i < nodes; i++){
//        if (!all_visited[i]){
//            output++;
//            all_visited[i] = true;
//            stack<int> s = {};
//            s.push(i);
//            int cur_output = 1;
//
//            while (!s.empty()){
//                vector<int> pt = graph[s.top()];
//                s.pop();
//
//                for (int j = 0; j < pt.size(); j++){
//                    if (!all_visited[pt[j]]){//is false
//                        s.push(pt[j]);
//                        all_visited[pt[j]] = true;//wrong fixed
//                        cur_output++;
//                    }
//                }
//            }
//        }
//    }
//
//    cout << output;
//
//    return 0;
//}