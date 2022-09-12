//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stack>
//#include <map>
//#include <stdio.h>
//#include <stack>
//#include <stdlib.h>
//#include <queue>
//using namespace std;
//int capacity[3];
//
//vector<int> pour(vector<int> input, int a, int b){
//    while (input[b] < capacity[b] && input[a] >= 1){
//        input[b]++;
//        input[a]--;
//    }
//    return input;
//}
//
//int main() {
//    for (int i = 0; i < 3; i++){
//        cin >> capacity[i];
//    }
//    vector<int> start;
//    for (int i = 0; i < 3; i++){
//        start.push_back(0);
//    }
//    start[0] = capacity[0];
//
//    queue<vector<int>> q;
//    queue<vector<int>> rq;
//    map<vector<int>, int> qcheck;
//    map<vector<int>, int> rqcheck;
//
//    q.push(start);
//    qcheck[start] = 1;
//
//    vector<int> end;
//    for (int i = 0; i < 3; i++){
//        end.push_back(0);
//    }
//    int half = capacity[0] / 2;
//
//    end[0] = half;
//    end[1] = half;
//    end[2] = 0;
//    rq.push(end);
//    rqcheck[end] = 1;
//
//    end[0] = 0;
//    end[1] = half;
//    end[2] = half;
//    rq.push(end);
//    rqcheck[end] = 1;
//
//    end[0] = half;
//    end[1] = 0;
//    end[2] = half;
//    rq.push(end);
//    rqcheck[end] = 1;
//
//    vector<int> pt;
//    vector<int> newpt;
//
//    while (!q.empty() && !rq.empty()){
//
//        if (!q.empty()){
//            pt = q.front();
//            q.pop();
//            for (int i = 0; i < 3; i++){
//                for (int j = 0; j < 3; j++){
//                    if (i != j){
//                        newpt = pt;
//                        newpt = pour(newpt, i, j);
//
//                        if (qcheck[newpt] == 0){
//                            q.push(newpt);
//                            qcheck[newpt] = qcheck[pt] + 1;
//
//                            if (rqcheck[newpt] != 0){
//                                cout << rqcheck[newpt] + qcheck[newpt] - 2;
//                                return 0;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    cout << "NO";
//    return 1;
//
//}