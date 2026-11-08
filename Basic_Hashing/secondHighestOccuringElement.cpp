#include<bits/stdc++.h>
using namespace std;

int secondMostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i<nums.size();i++){
        frequencyMap[nums[i]]++;
    }
    int maxFrequency = 0;
    int resultElement = INT_MAX;
}