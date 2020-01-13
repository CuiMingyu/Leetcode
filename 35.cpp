//
//  35.cpp
//  
//
//  Created by Cui on 2020/1/13.
//

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        if(nums[0] > target)
            return 0;
        if(nums[length - 1] < target)
            return length;
        int index = 0;
        for(int i = 0; i < length; ++i){
            if(target == nums[i])
                index = i;
        }
        for(int i = 1; i < length; ++i){
            if(nums[i - 1] < target && target < nums[i])
                index = i;
        }
        return index;
    }
};
