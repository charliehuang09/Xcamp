//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <unordered_set>
//#define ll long long
//using namespace std;
//
//void solve(){
//    string ta, tb;
//    cin >> ta >> tb;
//    int length;
//    char a;
//    string b, c;
//    cin >> length;
//    map<string, vector<string>> s;
//    map<string, vector<string>> d;
//    for (int i = 0; i < length; i++){
//        cin >> a >> b >> c;
//        if (a == 'N'){
//            s[b].push_back(c);
//            s[c].push_back(b);
//        }
//        else{
//            d[b].push_back(c);
//            d[c].push_back(b);
//        }
//    }
//    queue<string> q;
//    q.push(ta);
//    map<string, bool> visited;
//    map<string, int> type;
//    type[ta] = 1;
//    type[tb] = 0;
//    while(!q.empty()){
//        string curr = q.front();
//        q.pop();
//        vector<string> tmp1 (s[curr]);
//        vector<string> tmp2 (d[curr]);
//        for(int i = 0; i < tmp1.size(); i++){
//            if(!visited[tmp1[i]]){
//                q.push(tmp1[i]);
//                visited[tmp1[i]] = true;
//                type[tmp1[i]] = type[curr];
//            }
//        }
//        for(int i = 0; i < tmp2.size(); i++){
//            if(!visited[tmp2[i]]){
//                q.push(tmp2[i]);
//                visited[tmp2[i]] = true;
//                type[tmp2[i]] = type[curr] * -1;
//            }
//        }
//    }
//    if (type[tb] == 0) cout << "UNKNOWN";
//    if (type[tb] == 1) cout << "REACTS";
//    if (type[tb] == -1) cout << "DOES NOT REACT";
//    cout << "\n";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        solve();
//    }
//}