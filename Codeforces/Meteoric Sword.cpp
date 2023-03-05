//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll length, k;
//    cin >> length >> k;
//    ll input[length];
//    for (ll i = 0; i < length; i++) cin >> input[i];
//    ll psum[length + 1];
//    sort(input, input + length);
//    if (input[0] == input[length - 1]){
//        cout << 0;
//        return 0;
//    }
//    psum[0] = 0;
//    for (ll i = 1; i < length; i++){
//        psum[i] = psum[i - 1] + input[i - 1];
//    }
//    ll output = LONG_LONG_MAX;
//    for (ll i = 0; i < length - (k); i++){
//        ll med = i + k / 2;
//        ll a, b1, b2, c, d;
//        a = psum[i + (k / 2)] - psum[i];//everything left
//        b1= k / 2; //num of things
//        b2 = k - k / 2 - 1;//left
//        c = input[med];//rght
//        d = psum[i + k] - psum[i + (k / 2) + 1];//everthing on right
//        output = min(output, (d - (k - k/2 - 1) * c) - (a - (k - k/2) * c));
//        if (k % 2 == 0) output = min(output, (d - (b1 - 1) * c) - (a - (b2) * c));
//        else output = min(output, (d - b1 * c) - (a - b2 * c));
//    }
//    cout << output;
//    return 0;
//}