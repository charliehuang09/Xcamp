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
//struct abc{
//    int val;
//    int idx;
//};
//
//bool compare(abc a, abc b){
//    if (a.val == b.val){
//        return a.idx < b.idx;
//    }
//    return a.val < b.val;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    abc input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].val;
//        input[i].idx = i;
//    }
//
//    sort(input, input + length, compare);
//
//    for (int i = 0; i < length; i++){
//        cout << input[i].idx + 1 << " ";
//    }
//    cout << "\n";
//
//    ll total = 0;
//    for (int i = 0; i < length - 1; i++){
//        total += (input[i].val * (length - i - 1)) ;
//    }
//    cout<<fixed<<setprecision(2)<<double(total)/length;
//}