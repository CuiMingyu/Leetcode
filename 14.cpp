//
//  14.cpp
//  
//
//  Created by Cui on 2020/1/21.
//

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if(strs.empty()){
            return {};
        }
        int number = strs.size();
        int smallest = strs[0].size();
        for(auto i : strs){
            if(i.size() <= smallest)
                smallest = i.size();
        }
        int samenumber = 0;
        for(int i = 0; i < smallest; ++i){
            char singleword = strs[0][i];
            int count = 0;
            for(int j = 0; j < number; ++j){
                if(strs[j][i] == singleword)
                    ++count;
            }
            if(count == number)
                ++samenumber;
            else
                break;
        }
        if(samenumber == 0)
            return "";
        else{
            for(int i = 0; i < samenumber; ++i){
                result += strs[0][i];
            }
            return result;
        }
    }
};
