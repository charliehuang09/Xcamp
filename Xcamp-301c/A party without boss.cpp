///*
//    author: kartik8800
//*/
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
//#define fr(a,b) for(int i = a; i < b; i++)
//using namespace std;
//
//vector<int> tree[1000000];
//int depth[1000000];
//int output[1000000];
//
//void eval_depth(int src, int par){
//    int src_depth = 0;
//    for(int child : tree[src]){
//        if(child != par){
//            eval_depth(child, src);
//            src_depth = max(src_depth, 1 + depth[child]);
//        }
//    }
//    depth[src] = src_depth;
//}
//
//void solve(int root, int par, int par_ans)
//{
//    vector<int> prefix;
//    vector<int> suffix;
//    // get depth of child nodes.
//    for(int i = 0; i < tree[root].size(); i++){
//        if(tree[root][i] != par){
//            prefix.push_back(depth[tree[root][i]]);
//            suffix.push_back(depth[tree[root][i]]);
//        }
//    }
//    // build prefix and suffix
//    for(int i = 1; i < prefix.size(); i++) prefix[i] = max(prefix[i], prefix[i - 1]);
//    for(int i = (int)suffix.size() - 2; i >= 0; i--) suffix[i] = max(suffix[i], suffix[i + 1]);
//
//    //eval output for every child c_no
//    int c_no = 0;
//    for(int i = 0; i < tree[root].size(); i++){
//        if(tree[root][i] != par){
//            int op1 = (c_no == 0) ? INT_MIN : prefix[c_no - 1];
//            int op2 = (c_no == (int)suffix.size() - 1) ? INT_MIN : suffix[c_no + 1];
//            int partial_ans = 1 + max(par_ans, max(op1,op2));
//
//            solve(tree[root][i], root, partial_ans);
//            c_no++;
//        }
//    }
//
//    //eval output for src
//    output[root] = 1 + max(par_ans, (prefix.empty() ? -1 : prefix.back()));
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    int a, b;
//    for (int i = 0; i < length - 1; i++){
//        cin >> a >> b;
//        tree[a].push_back(b);
//        tree[b].push_back(a);
//    }
//    eval_depth(1, 0);
//    solve(1, 0, -1);
//    for (int i = 1; i <= length; i++){
//        cout << output[i] << " ";
//    }
//}