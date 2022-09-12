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
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int people_len, ticket_len, t;
//    cin >> ticket_len >> people_len;
//    vector<int> people;
//    vector<int> ticket;
//    for (int i = 0; i < ticket_len; i++){
//        cin >> t;
//        ticket.push_back(t);
//    }
//    for (int i = 0; i < people_len; i++){
//        cin >> t;
//        people.push_back(t);
//    }
//    sort(ticket.begin(), ticket.end(), greater<int>());
//    for (int i = 0; i < people.size(); i++){
//        auto it = lower_bound(ticket.begin(), ticket.end(), people[i], greater<int>());
//        if (it != ticket.end()){
//            cout << *it << "\n";
//            ticket.erase(ticket.begin() + distance(ticket.begin(), it));
//        }
//        else cout << "-1\n";
//    }
//}