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
//struct format{
//    vector<int> c;
//    int t;
//    int p;
//};
//
//struct cash_format{
//    int time;
//    int id;
//    cash_format(int a, int b){
//        time = a;
//        id = b;
//    };
//    bool operator==(const cash_format &o) const {
//        return time == o.time && id == o.id;
//    }
//
//    bool operator<(const cash_format &o)  const {
//        return time < o.time || (time == o.time && id < o.id);
//    }
//};
//
//vector<format> tree;
//map<cash_format, int> dp;//time id   paintings
//format temp;
//
//void why_is_input_so_hard(int prev){
//    int a, b;
//    cin >> a >> b;
//    tree[prev].c.push_back(tree.size());
//    tree.push_back(temp);
//    tree[tree.size() - 1].t = a;
//    tree[tree.size() - 1].p = b;
//    if (b != 0) return;
//    int t = tree.size() - 1;
//    why_is_input_so_hard(t);
//    why_is_input_so_hard(t);
//}
//
//int solve(int root, int budget){
//    budget -= tree[root].t*2;
//    if (budget <= 0) return 0;
//    if (dp.count(cash_format(budget, root))) return dp[cash_format(budget, root)];
//    if (tree[root].p != 0){
//        return dp[cash_format(budget, root)] = dp[cash_format(budget, root)] = min(budget / 5, tree[root].p);;
//    }
//    int output = 0;
//    for (int i = 0; i <= budget; i++){
//        output = max(output, solve(tree[root].c[0], i) + solve(tree[root].c[1], budget - i));
//    }
//    return dp[cash_format(budget, root)] = output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int max_time;
//    cin >> max_time;
//    tree.push_back(temp);
//    why_is_input_so_hard(0);
//
//    cout << solve(1, max_time);
//
//    return 0;
//}
////60
////7 0 8 0 3 1 14 2 10 0 12 4 6 2