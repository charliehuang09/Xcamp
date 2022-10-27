//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll unsigned long long
//using namespace std;
//ll cash[10000][10000];
//const string albert = "Albert is a Furry\n";
//const ll MOD = 1e9 + 7;
//ll helper(ll a, ll b, ll index){
//    if (cash[a][b] != 0) return cash[a][b];
//    if (index == 1){
//        if (a == b) return 1;
//        return 0;
//    }
//    index--;
//    cash[a + index][b] = helper(a + index, b, index) % MOD;
//    cash[a][b + index] = helper(a, b + index, index) % MOD;
//    return (cash[a + index][b] + cash[a][b + index]) % MOD;
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll input = 250;
////    int input;
////    cin >> input;
//    cout << helper(input, 0, input + 0);
//
//}