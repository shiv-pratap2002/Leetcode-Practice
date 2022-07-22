class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        while(n>0)
        {
            if(n%2==1)
            {
                c++;
            }
            n = n>>1;
        }
        return c;
    }
    bool isPrime(int num)
    {
        return (num == 2 || num == 3 || num == 5 || num ==7 || num == 11 
                || num == 13 || num == 17 || num == 19);
    }
    int countPrimeSetBits(int left, int right) {
        int m=0;
        while(left<=right)
        {
            int c = hammingWeight(left);
            
            if(isPrime(c))
            {
                cout<<c<<'\n';
                m++;
            }
            left++;
        }
        return m;
    }
};