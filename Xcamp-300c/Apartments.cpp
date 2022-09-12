//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//int main(){
//    vector<int> apartments;
//    vector<int> people;
//    int apartments_size;
//    int people_size;
//    int k;
//    int t;
//    cin >> people_size >> apartments_size >> k;
//    for (int i = 0; i < people_size; i++){
//        cin >> t;
//        people.push_back(t);
//    }
//    for (int i = 0; i < apartments_size; i++){
//        cin >> t;
//        apartments.push_back(t);
//    }
//    int output = 0;
//    sort(apartments.begin(), apartments.end());
//    sort(people.begin(), people.end());
//    for (int i = 0; i < people_size; i++){
//        auto higher = lower_bound(apartments.begin(), apartments.end(), people[i] - k);
////        cout << *higher << " " << people[i] << "\n";
//        if (higher != apartments.end()){
//            if (*higher <= people[i] + k){
//                apartments.erase(higher);
//                output++;
//            }
//        }
//    }
//    cout << output;
//}