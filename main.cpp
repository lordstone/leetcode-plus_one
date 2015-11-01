class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ptr = digits.size() - 1;
        bool flag = true;
        while(ptr >= 0){
            if(digits[ptr] < 9 && flag){
                flag = false;
                digits[ptr] ++;
                return digits;
            }else if(digits[ptr] == 9 && flag){
                flag = true;
                digits[ptr] = 0;
            }
            ptr --;
        }//end while
        if(flag){
            digits.insert(digits.begin(), 1);    
        }
        return digits;
    }
};
