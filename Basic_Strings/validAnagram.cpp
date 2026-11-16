#include<bits/stdc++.h>

bool anagramStrings(std::string &s, std::string &t){

    if(s.length() != t.length()) return false;
    std::unordered_map<char,int> mp,mp1;
    for(int i = 0; i<s.length();i++){
        mp[s[i]]++;
    }
    for(int i = 0; i<t.length();i++){
        mp1[t[i]]++;
    }

    if(mp == mp1) return true;

    return false;
}