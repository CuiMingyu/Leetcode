//
//  20.cpp
//  
//
//  Created by Cui on 2020/1/21.
//

#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for(auto c:s){
            switch(c){
                case '(':
                    store.push(')');
                    break;
                case '{':
                    store.push('}');
                    break;
                case '[':
                    store.push(']');
                    break;
                default:
                    if(store.size() ==0 || c != store.top())
                        return false;
                    else
                        store.pop();
            }
        }
        return store.size() == 0;
    }
};
