//#include<iostream>
//#include<cstring>
//#include<map>
//
//using namespace std;
//int main(){
//    int length;
//    cin >> length;
//    int a, b;
//    map<int, int> input;
//
//    for (int i = 0; i < length; i++) {
//        cin >> a >> b;
//        input[a] += 1;
//        input[b] += -1;
//    }
//
//    int output = 0;
//    int current = 0;
//    for (auto itr : input){
//        current += itr.second;
//        output = max(output, current);
//    }
//    cout << output << endl;
//
//    return 0;
//
//}
