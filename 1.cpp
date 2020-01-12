//
//  1.cpp
//  
//
//  Created by Cui on 2020/1/12.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index = nums.size();
        vector<int> result;

        for (int i = 0; i < index - 1; ++i){
            for (int j = i + 1; j < index; ++j){
                if (nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        
        return result;
    }
};
