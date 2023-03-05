//#include <bits/stdc++.h>
//using namespace std;
//unsigned long long int solve(unsigned long long int input){
//    set<unsigned long long int> nums;
//    unsigned long long int i = 1;
//    bool square = true;
//    bool cube = true;
//    while (square == true || cube == true){
//        if (i * i <= input){
//            //cout << i * i << " ";
//            nums.insert(i * i);
//        }
//        else{
//            square = false;
//        }
//        if (i * i * i <= input){
//            //cout << i * i * i << " ";
//            nums.insert(i * i * i);
//        }
//        else{
//            cube = false;
//        }
//        i++;
//    }
//    return nums.size();
//}
//int main(){
//    unsigned long long int length;
//    cin >> length;
//    unsigned long long int output[length];
//    unsigned long long int temp;
//    for (unsigned long long int i = 0; i < length; i++){
//        cin >> temp;
//        output[i] = solve(temp);
//    }
//    for (unsigned long long int i = 0; i < length; i++){
//        cout << output[i] << " ";
//    }
//}