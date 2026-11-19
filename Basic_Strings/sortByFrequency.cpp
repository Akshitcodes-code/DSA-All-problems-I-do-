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
                if (mp[a] == mp[b]) {
                    return a < b;
                }
                return mp[a] > mp[b];
            });

            return v;
        }