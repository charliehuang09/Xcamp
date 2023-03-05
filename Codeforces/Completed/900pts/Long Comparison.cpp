//#include <bits/stdc++.h>
//using namespace std;
//char solve(string num1, int zero1, string num2, int zero2){
//    zero1 += num1.size();
//    zero2 += num2.size();
//    if (zero1 > zero2){
//        return '>';
//    }
//    if (zero1 < zero2){
//        return '<';
//    }
//    while (num1.size() != num2.size()){
//        if (num1.size() > num2.size()){
//            num2 = num2 + '0';
//        }
//        else{
//            num1 = num1 + '0';
//        }
//    }
//    stringstream intValue1(num1);
//    int intnum1;
//    intValue1 >> intnum1;
//    stringstream intValue2(num2);
//    int intnum2;
//    intValue2 >> intnum2;
//    if (intnum1 > intnum2){
//        return '>';
//    }
//    if (intnum1 < intnum2){
//        return '<';
//    }
//    if (intnum1 == intnum2){
//        return '=';
//    }
//    //cout << intnum1 << " " << intnum2 << "\n";
//    return 'N';
//}
//int main(){
//    int testcases;
//    cin >> testcases;
//    char output[testcases];
//    for (int i = 0; i < testcases; i++){
//        string a,c;
//        int b,d;
//        cin >> a >> b >> c >> d;
//        output[i] = solve(a,b,c,d);
//    }
//    for (int i = 0; i < testcases; i++){
//        cout << output[i] << "\n";
//    }
//}