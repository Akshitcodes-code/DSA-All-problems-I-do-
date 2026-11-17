#include<bits/stdc++.h>
std::vector<char> frequencySort(std::string &s) {
            std::unordered_map<char, int> mp;
            std::vector<char> v;

            for (int i = 0; i < s.length(); i++) {
                mp[s[i]]++;
            }

            for (const auto& pair : mp) {
                v.push_back(pair.first);
            }

            std::sort(v.begin(), v.end(), [&](char a, char b) {
                // Rule 1: If counts are the same, sort alphabetically ('a' before 'b')
                if (mp[a] == mp[b]) {
                    return a < b;
                }
                // Rule 2: Otherwise, put the higher count first
                return mp[a] > mp[b];
            });

            return v;
        }