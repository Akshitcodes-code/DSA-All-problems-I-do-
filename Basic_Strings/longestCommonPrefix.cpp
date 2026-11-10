#include<bits/stdc++.h>
using namespace std;


// string longestCommonPrefix(vector<string>& str){
//     if (str.empty()) return "";
//     sort(str.begin(),str.end());
//     bool found = false;
//     int indx = 0;
//     int strtindx = 0;
//     int endindx = str.size()-1;
//     int strt = 0;
//     while (true){
//         if (str[strtindx][strt] == str[endindx][strt]){
//             found = true;
//             indx++;
//             strt++;
//         }else{
//             break;
//         }
//     }	
//     if (found){
//         return str[0].substr(0,indx);
//     }
//     else{
//         return "";
//     }

// }


string longestCommonPrefix(vector<string>& str){
    if (str.empty()) return "";

    sort(str.begin(), str.end());

    string first = str[0];
    string last = str[str.size() - 1];

    int i = 0;
    while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }

    return first.substr(0, i);
}