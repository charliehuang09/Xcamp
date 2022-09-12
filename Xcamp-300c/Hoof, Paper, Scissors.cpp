//#include <iostream>
//#include <cstring>
//
//using namespace std;
//int main(){
//    int length;
//    cin >> length;
//    length++;
//    int p[length];
//    int h[length];
//    int s[length];
//    memset(p, 0, sizeof(p));
//    memset(h, 0, sizeof(h));
//    memset(s, 0, sizeof(p));
//    char t;
//    for (int i = 1; i < length; i++) {
//        cin >> t;
//        if (t == 'P'){
//            p[i] = p[i - 1] + 1;
//            h[i] = h[i - 1];
//            s[i] = s[i - 1];
//        }
//        else if (t == 'S'){
//            p[i] = p[i - 1];
//            h[i] = h[i - 1];
//            s[i] = s[i - 1] + 1;
//        }
//        else{
//            p[i] = p[i - 1];
//            h[i] = h[i - 1] + 1;
//            s[i] = s[i - 1];
//        }
//    }
//
//    int output = 0;
//    for (int i = 0; i < length; i++){
//        output = max(output, p[i] + (h[length - 1] - h[i]));
//        output = max(output, p[i] + (s[length - 1] - s[i]));
//        output = max(output, h[i] + (p[length - 1] - p[i]));
//        output = max(output, h[i] + (s[length - 1] - s[i]));
//        output = max(output, s[i] + (p[length - 1] - p[i]));
//        output = max(output, s[i] + (h[length - 1] - h[i]));
//
//    }
//    cout << output;
//}
