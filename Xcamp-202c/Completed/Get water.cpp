//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stdio.h>
//using namespace std;
//struct person{
//    int time;
//    int pos;
//};
//bool compare(person a, person b){
//    if (a.time == b.time){
//        if (a.pos > b.pos){
//            return false;
//        }
//        return true;
//    }
//    if (a.time > b.time){
//        return false;
//    }
//    return true;
//}
//int main() {
//    int length;
//    cin >> length;
//    person input[length];
//    for (int i = 0; i < length; i++){
//        cin >> input[i].time;
//        input[i].pos = i + 1;
//    }
//    sort(input, input + length, compare);
//    long double avg = 0;
//    for (int i = 0; i < length; i++){
//        cout << input[i].pos << " ";
//    }
//    double tot;
//    for (int i = 0; i < length - 1; i++){
//        tot += (length - 1 - i) * input[i].time;
//    }
//    printf("%.2f", tot / length);
//}
///*
//10
//56 12 1 99 1000 234 33 55 99 812
// */