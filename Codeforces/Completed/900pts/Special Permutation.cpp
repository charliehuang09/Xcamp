//#include <bits/stdc++.h>
//using namespace std;
//void solve(int length, int small, int large){
//    int s[length / 2];
//    int l[length / 2];
//    s[0] = small;
//    l[0] = large;
//    queue<int> q;
//    for (int i = 1; i <= length; i++){
//        if (i != small && i != large){
//            q.push(i);
//        }
//    }
//    for (int i = 1; i < length / 2; i++){
//        if (large > q.front()){
//            l[i] = q.front();
//        }
//        else{
//            cout << -1;
//            return;
//        }
//        q.pop();
//    }
//    for (int i = 1; i < length / 2; i++){
//        if (small < q.front()){
//            s[i] = q.front();
//        }
//        else{
//            cout << -1;
//            return;
//        }
//        q.pop();
//    }
//    for (int i = 0; i < length / 2; i++){
//        cout << s[i] << " ";
//    }
//    for (int i = 0; i < length / 2; i++){
//        cout << l[i] << " ";
//    }
//}
//int main(){
//    int testcases;
//    cin >> testcases;
//    for (int i = 0; i < testcases; i++){
//        int n, a, b;
//        cin >> n >> a >> b;
//        solve(n,a,b);
//        cout << "\n";
//    }
//}