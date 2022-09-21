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
//
//int cash[1000][1000];
//string a, b;
//
//int helper(int n, int m){
//    if (n < 0 || m < 0) return 0;
//    if (cash[n][m] != -1) return cash[n][m];
//    int output;
//    if (a[n] == b[m]) output = helper(n - 1, m - 1) + 1;
//    else output =  max(helper(n - 1, m), helper(n, m - 1));
//    cash[n][m] = output;
//    return output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    memset(cash, -1, 1000 * 1000 * sizeof(int));
//    cin >> a >> b;
//    cout << helper(a.size() - 1, b.size() - 1);
//}