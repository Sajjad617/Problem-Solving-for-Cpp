class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        vector<int> target = count_digit(n);
        for(int i=0; i<32; i++)
        {   
            int x = 1 << i;
            vector<int> col = count_digit(x);
            if(target == col)
                return true;
        }
        return false;

    }
private:
    vector<int> count_digit (int n)
    {
        vector<int> v(10, 0);
        while(n > 0)
        {
            v[n%10]++;
            n /= 10;
        }
        return v;
    }
};