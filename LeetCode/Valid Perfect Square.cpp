
#define  ll long long int

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1;
        int r = (1 << 31 -1);
        if(num == 1)
            return true;
        while(l < r){
            ll mid = (ll) (l+r)/2;
            ll ans = mid*mid;
            if(ans == num){
                return true;
            }
            else if(ans > num){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
            if((ll)l*l == (ll)num)
                return true;
        }
        return false;
    }
};
