//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//int input[100000];
//int length, target;
//
//int get_time(int x) {
//    priority_queue<int, vector<int>, greater<int> > q;
//    int time = 0, finish = 0;
//    for (int i = 0; i < length; i++){
//        if (q.size() < x){
//            q.push(input[i]);
//            finish = max(finish, input[i]);
//        }
//        else{
//            time = q.top();
//            q.pop();
//            q.push(input[i]+time);
//            finish = max(finish, input[i]+time);
//        }
//    }
//    return finish;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> length >> target;
//    int l = 0;
//    int r = 0;
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//        r = max(r, input[i]);
//    }
//
////    cout << get_time(1);
////    return 0;
//
//    while(r - l > 1){
//        int mid = (r + l) / 2;
//        int value = get_time(mid);
////        cout << value << " " << mid << "\n";
//        if (value > target){
//            l = mid;
//        }
//        else{
//            r = mid;
//        }
//    }
//
//    cout << r;
//
//
//
//
//
//
//
//
//}