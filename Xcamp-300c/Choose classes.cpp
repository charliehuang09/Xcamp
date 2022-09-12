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
//struct class_{
//    int start;
//    int end;
//};
//
//bool compare(class_ a, class_ b){
//    return a.end < b.end;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    class_ input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].start >> input[i].end;
//    }
//
//    sort(input, input + length, compare);
//
//    int prev = 0;
//    int output = 0;
//    for (int i = 0; i < length; i++){
//        if (prev <= input[i].start){
//            prev = input[i].end;
//            output++;
//        }
//    }
//    cout << output;
//
//}