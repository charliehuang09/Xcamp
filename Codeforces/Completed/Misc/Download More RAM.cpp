//#include <bits/stdc++.h>
//using namespace std;
//struct ram__{
//    int price;
//    int ram_;
//};
//bool compare(ram__ a, ram__ b){
//    return a.price < b.price;
//}
//int main(){
//    int testcases;
//    cin >> testcases;
//    for (int index = 0; index < testcases; index++){
//        int length,ram;
//        cin >> length >> ram;
//        ram__ input[length];
//        for (int i = 0; i < length; i++){
//            cin >> input[i].price;
//        }
//        for(int i = 0; i < length; i++){
//            cin >> input[i].ram_;
//        }
//        sort (input, input + length, compare);
//        int i = 0;
//        while(i < length){
//            if (ram < input[i].price){
//                break;
//            }
//            ram += input[i].ram_;
//            i++;
//        }
//        cout << ram << "\n";
//    }
//}