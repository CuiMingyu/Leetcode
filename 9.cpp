//
//  9.cpp
//  
//
//  Created by Cui on 2020/1/22.
//

class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x){
            res = res * 10 + x % 10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};
