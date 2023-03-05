//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <stack>
//#define ll long long
//using namespace std;
//
//vector<int> tree[10000];
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, a, b;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        cin >> a >> b;
//        tree[a].push_back(b);
//    }
//    int output = 1;//count root node
//    queue<int> q;
//    q.push(0);
//    while(!q.empty()){
//        int curr = q.front();
//        q.pop();
//        for (int i = 0; i < tree[curr].size(); i++){
//            output++;
//            q.push(tree[curr][i]);
//        }
//    }
//    cout << output;
//}