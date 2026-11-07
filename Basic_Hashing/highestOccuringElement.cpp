#include<bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i<nums.size();i++){
        frequencyMap[nums[i]]++;
    }
    int maxFrequency = 0;
    int resultElement = INT_MAX;
    for(auto &it : frequencyMap){
        int currentElement = it.first;
        int currentFrequency = it.second;

        if(currentFrequency>maxFrequency){
            maxFrequency = currentFrequency;
            resultElement = currentElement;
        }else if (maxFrequency == currentFrequency){
            if(currentElement<resultElement){
                resultElement=currentElement;
            }
        }
    }
}