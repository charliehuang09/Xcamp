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
//using namespace std;
//int main() {
//    int nodes, edges;
//    cin >> nodes >> edges;
//    vector<int> graph[nodes];
//    int parents[nodes];
//    int node1, node2;
//    for (int i = 0; i < nodes; i++) {
//        parents[i] = 0;
//    }
//
//    for (int i = 0; i < edges; i++) {
//        cin >> node1 >> node2;
//        node1--;
//        node2--;
//        graph[node1].push_back(node2);
//        parents[node2]++;
//    }
//
//    vector<int> output;
//
//    for (int i = 0; i < nodes; i++){
//        if (parents[i] == 0){
//            output.push_back(i + 1);
//            for (int j = 0; j < graph[i].size(); j++){
//                parents[graph[i][j]]--;
//            }
//            parents[i] = -1;
//            i =-1;
//        }
//    }
//
//    for (int i = 0; i < output.size(); i++){
//        cout << output[i] << " ";
//    }
//
//}