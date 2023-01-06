#include<bits/stdc++.h>
using namespace std;

int findDuplicate1(vector<int> &nums){
    sort(nums.begin(), nums.end());
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1])
            return nums[i];
    }
    return -1;
}

int findDuplicate2(vector<int> &nums){
    unordered_set<int> seen;
    for(auto num: nums){
        if(seen.count(num))
            return num;
    }
    return -1;
}

//Binary search
int findDuplicate(vector<int>& nums) {

    // Lambda function to count how many numbers are less than or equal to 'cur'
    auto small_or_equal = [&](int cur) {
        int count = 0;
        for (auto &num: nums) {
            if (num <= cur)
                count++;
        }
        return count;
    };
    
    // 'low' and 'high' represent the range of values of the target
    int low = 1, high = nums.size();
    int duplicate = -1;
    while (low <= high) {
        int cur = (low + high) / 2;
        
        if (small_or_equal(cur) > cur) { 
            duplicate = cur;
            high = cur - 1;
        } else {
            low = cur + 1;
        }
    }

    return duplicate;
}