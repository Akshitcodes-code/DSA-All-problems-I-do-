#include<bits/stdc++.h>
using namespace std;

bool isomorphicString(string s, string t){
    if (s.length() != t.length()) return false;
    //your code goes here
    map<char,char> sToT;
    map<char,char> tSoS;
    for (int i =0;i<s.length(); i++){
        char a = s[i];
        char b = t[i];

        if (sToT.count(a) && sToT[a] != b) return false;
        if (tSoS.count(b) && tSoS[b] != a) return false;

        sToT[a] = b;
        tSoS[b] = a;

    }
    return true;
}