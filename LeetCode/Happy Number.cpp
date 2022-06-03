class Solution {
public:
    int square_sum(int num) {
        int sum = 0;
        while(num != 0) {
            int d = num % 10;
            sum += d*d;
            num /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set < int > s;
        while(s.find(n) == s.end()){
             s.insert(n);
            n = square_sum(n);
        
        if(n == 1)
            return true;
        }
        
        return false;
        
    }
};
