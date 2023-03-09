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
//using namespace std;
//struct format{
//    int time;
//    int value;
//};
//bool compare(format a, format b){
//    if (a.value == b.value) return a.time > b.time;
//    return a.value > b.value;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length, m = 0;
//    cin >> length;
//    format input[length];
//    for (int i = 0; i < length; i++) cin >> input[i].time, m = max(m, input[i].time);
//    for (int i = 0; i < length; i++) cin >> input[i].value;
//    sort(input, input + length, compare);
//    bool used[m + 1];
//    memset(used, false, sizeof(used));
//    int out = 0;
//    for (int i = 0; i < length; i++){
//        int idx = input[i].time;
//        while (idx > 1 && used[idx]) idx--;
//        if (!used[idx]) out += input[i].value;
//        used[idx] = true;
//    }
//    cout << out << endl;
//    return 0;
//
//}