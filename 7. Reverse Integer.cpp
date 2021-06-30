class Solution {
public:
    int reverse(int x) {
        int res = 0;
        if(x != 0) {
            while(x != 0) {
                if(res > INT_MAX/10 || INT_MIN/10 > res) {
                    return 0;
                }
                res = res*10 + x % 10;
                x = x / 10;
            }
        }
        return(res);
    }
};
