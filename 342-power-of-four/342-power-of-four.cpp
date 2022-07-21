class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==-2147483648)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        int c = 0;
        if(n&&!(n&(n-1)))
          {
            while(n>1)
               {
                   n>>=1;
                   c++;
               }
           }
           if(c==0)
           {
               c=1;
           }
           if(c%2==0)
           {
               return true;
           }
        return false;
    }
};