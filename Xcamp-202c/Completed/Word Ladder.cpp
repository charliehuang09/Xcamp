//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stack>
//#include <map>
//#include <stdio.h>
//#include <queue>
//#include <stdlib.h>
//using namespace std;
//bool neighbors(string first, string second){
//    int t;
//    t = first.length() - second.length();
//    int difference = abs(t);
//    if (difference > 1){
//        return false;
//    }
//    if (difference == 1){
//        if (first.size() > second.size()){
//            for (int i = 0; i < first.size(); i++){
//                string t1 = first;
//                t1.erase(i, i + 1);
//                if (t1 == second){
//                    return true;
//                }
//            }
//            return false;
//        }
//        else{
//            for (int i = 0; i < second.size(); i++){
//                string t1 = second;
//                t1.erase(i, i + 1);
//                if (t1 == first){
//                    return true;
//                }
//            }
//            return false;
//        }
//    }
//    int differences = 0;
//    if (difference == 0){
//        for (int i = 0; i < first.size(); i++){
//            if (first[i] != second[i]){
//                differences++;
//            }
//        }
//    }
//    if (differences > 1){
//        return false;
//    }
//    return true;
//}
//int main() {
//    string start, end;
//    cin >> start >> end;
//    int length;
//    cin >> length;
//    string input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//    }
//    map<string, int> qcheck;
//    map<string, int> rqcheck;
//    qcheck[start] = 0;
//    rqcheck[start] = 0;
//    queue<string> q;
//    queue<string> rq;
//    q.push(start);
//    rq.push(end);
//    while (!q.empty() && !rq.empty()){
//        if (!q.empty()){
//            string word = q.front();
//            q.pop();
//            for (int i = 0; i < length; i++){
//                string newword = input[i];
//                if (qcheck[newword] == 0){//loop check
//                    if (neighbors(word, newword) && word != newword){//if neighbors
//                        qcheck[newword] = qcheck[word] + 1;
//                        q.push(newword);
//                        if (rqcheck[newword] != 0 || newword == end){
//                            cout << rqcheck[newword] + qcheck[newword];
//                            return 0;
//                        }
//                    }
//                }
//            }
//        }
//        if (!rq.empty()){
//            string word = rq.front();
//            rq.pop();
//            for (int i = 0;i < length; i++){
//                string newword = input[i];
//                if (rqcheck[newword] == 0){
//                    if (neighbors(word, newword) && word != newword){
//                        rqcheck[newword] = rqcheck[word] + 1;
//                        rq.push(newword);
//                        if (qcheck[newword] != 0 || newword == start){
//                            cout << rqcheck[newword] + qcheck[newword];
//                            return 0;
//                        }
//                    }
//                }
//            }
//        }
//    }
//    cout << -1;
////    for (int i = 0; i < length; i++){
////        cout << qcheck[input[i]] << "\n";
////    }
////    return 0;
//}
///*
//hello
//world
//6
//hello
//hollo
//worls
//wollo
//wolld
//world
// */