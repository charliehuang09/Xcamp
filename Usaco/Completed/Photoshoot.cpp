//#include <iostream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//using namespace std;
//vector<int> output;
//void cout_(){
//    for (int i = 0; i < output.size(); i++){
//        cout << output[i] << " ";
//    }
//}
//int main(){
//    int length;
//    cin >> length;
//    int input[length];
//    for (int i = 0; i < length - 1; i++){
//        cin >> input[i];
//    }
//    int test = 0;
//    set<int> number;
//    while (true){
//        bool done = true;/;p0.;
//        output.clear();
//        number.clear();
//        test++;
//        int size = 1;
//        number.insert(test);
//        output.push_back(test);
//        for (int i = 0; i < length - 1; i++){
//            size++;
//            int nextnum = input[i] - output[output.size() - 1];
//            number.insert(nextnum);
//            output.push_back(nextnum);
//            if (nextnum <= 0){
//                done = false;
//                break;
//            }
//            if (number.size() != size){
//                done = false;
//                break;
//            }
//        }
//        if (done == true){
//            cout_();
//            return 0;
//        }
//    }
//}