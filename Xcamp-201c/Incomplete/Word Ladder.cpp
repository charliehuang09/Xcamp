//// bfs practice for xjoi problem 12608
//
//#include <bits/stdc++.h>
//using namespace std;
//
//set<string> dict;
//map<string, bool> visited;
//map<string, int> step;
//
//// check if two words are neighbors
//bool isNeighbor(string word1, string word2) {
//  int diff = word1.length()-word2.length();
//  if (abs(diff) > 1)
//    return false;
//  if (word1.length() == word2.length())
//  {
//    int count = 0;
//    for (int i = 0; i < word1.length(); i++)
//    {
//      if (word1[i] != word2[i])
//      {
//        count++;
//        if (count > 1) // too many chars are different
//          return false;
//      }
//    }
//    return true;
//  }
//  else if (word1.length() == word2.length()+1)
//  {
//    for (int i = 0; i < word1.length(); i++)
//    {
//      string tmp = word1;
//      tmp.erase(i, 1);
//      if (tmp == word2) // only one char is different
//        return true;
//    }
//    return false;
//  }
//  else
//  {
//    for (int i = 0; i < word2.length(); i++)
//    {
//      string tmp = word2;
//      tmp.erase(i, 1);
//      if (tmp == word1)
//        return true;
//    }
//    return false;
//  }
//}
//
//int ladder_length(string start, string end) {
//    // define queue
//    // add start word to queue
//    // update visited and step
//
//    while (!q.empty()) {
//        // take front and pop
//        // find all neighboring words
//        // if end word, done
//        // otherwise, add to queue
//        // update visited and step
//    }
//    return -1;
//}
//
//int main() {
//    int n;
//    string start, end;
//    cin >> start;
//    cin >> end;
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//      string s;
//      cin >> s;
//      dict.insert(s);
//    }
//    cout << ladder_length(start, end) << endl;
//    return 0;
//}
