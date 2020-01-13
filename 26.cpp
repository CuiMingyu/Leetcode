//
//  26.cpp
//  
//
//  Created by Cui on 2020/1/13.
//

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return {};
        int initial_size = nums.size();
        int finalize_size = 0;
        int current_step = 1;
        int initial_value = nums[0];
        for(int i = 1; i < initial_size; ++i){
            if(initial_value == nums[i])
                continue;
            // swap
            nums[current_step] = nums[i];
            ++current_step;
            initial_value = nums[i];
        }
        for(int i = 0; i < initial_size - current_step; ++i){
            nums.pop_back();
        }
        return current_step;
    }
};
