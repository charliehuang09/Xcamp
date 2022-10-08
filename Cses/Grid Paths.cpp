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
//const int MOD = 1e9 + 7;
//int length;
//vector<string> input;
//
//void helper(vector<int> prev, int idx){
//    if (idx == length){
//        cout << prev[prev.size() - 1];
//        exit(0);
//    }
//    vector<int> output;
//    if (input[idx][0] == '.') output.push_back(prev[0]);
//    else output.push_back(0);
//    for (int i = 1; i < length; i++){
//        if (input[idx][i] == '.') output.push_back((output[output.size() - 1] + prev[i]) % MOD);
//        else{
//            output.push_back(0);
//        }
//    }
//    helper(output, idx + 1);
//}
//
//int main(){
//    cin >> length;
//    string t;
//    vector<int> template_;
//    int temp = 1;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//        if (input[0][i] == '*') temp = 0;
//        template_.push_back(temp);
//    }
//    helper(template_, 1);
//}