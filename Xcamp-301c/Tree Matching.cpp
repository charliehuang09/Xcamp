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
//const int Max_Nodes = 200000;
//vector<int> tree[Max_Nodes];
//int dp[Max_Nodes][2];//I take, I not take
//
//void dfs(int current, int parent){
//    dp[current][0] = 0;
//    int choose_index = -1;
//    int max_difference = -1;
//    int output = 0;
//    int sum = 0;
//    vector<int> psum;
//    vector<int> connected;
//    psum.push_back(0);
//    connected.push_back(0);
//    for (int i = 0; i < tree[current].size(); i++) {
//        if (parent == tree[current][i]) continue;
//        dfs(tree[current][i], current);
//        dp[current][1] += max(dp[tree[current][i]][0], dp[tree[current][i]][1]);
//        connected.push_back(dp[tree[current][i]][1] + 1);
//        psum.push_back(dp[tree[current][i]][1]);
//    }
//    for (int i = 1; i < psum.size(); i++){
//        output = max(output, connected[i] + psum[i - 1] + psum[psum.size() - 1] - psum[i]);
//    }
//    dp[current][0] = output;
//    if (tree[current].size() > 1) dp[current][0] = max(output, 1);
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    int a, b;
//    for (int i = 0; i < length - 1; i++){
//        cin >> a >> b;
//        tree[a].push_back(b);
//        tree[b].push_back(a);
//    }
//    dfs(5, -1);
//    cout << max(dp[1][0], dp[1][1]);
//
//    return 0;
//}