//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//int main() {
//    map<char, int> cowphebat;
//    string alph, word;
//    cin >> alph >> word;
//    for (int i = 0; i < alph.size(); i++){
//        cowphebat[alph[i]] = i;
//    }
//    int remain = word.size();
//    int output = 0;
//    int point = cowphebat[word[0]];
//    word.erase(word.begin());
//    while(word.size() != 0){
//        if (cowphebat[word[0]] > point){
//            point = cowphebat[word[0]];
//            word.erase(word.begin());
//        }
//        else{
//            // cout << word.size() << " ";
//            output++;
//            point = cowphebat[word[0]];
//            word.erase(word.begin());
//
//        }
//    }
//    cout  << output + 1;
//
//}