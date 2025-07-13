class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, h = (num/2)+1;

        long mid;
        while(l <= h)
        {
            mid = (l+h)/2;
            long cal = mid*mid;
            if(cal == num)
                return true;
            else if(cal > num)
            {
                h = mid-1;
            }
            else if(cal < num)
            {
                l = mid+1;
            }
        }
        return false;
    }
};