//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define INT_MAX 2147483647
//#define ll long long
//using namespace std;
//vector<int> count(vector<int> input){
//    vector<int> output;
//    for (int i = 0; i < 5; i++) output.push_back(0);
//    for (int i = 0; i < 5; i++) output[input[i]]++;
//    return output;
//}
//void check(vector<int> input){
//    vector<int>a = count(input);
//    for (int i = 0; i < 5; i++){
//        if (a[i] != input[i]) return;
//    }
//    for (int i = 0; i < 5; i++){
//        cout << input[i] << " ";
//    }
//    exit(0);
//}
//void helper(vector<int> input, int n){
//    input.push_back(n);
//    if (input.size() == 5){
//        check(input);
//        return;
//    }
//    for (int i = 0; i <= 4; i++){
//        helper(input, i);
//    }
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    vector<int> a;
//    for (int i = 0; i <= 4; i++){
//        helper(a, i);
//    }
//
//}