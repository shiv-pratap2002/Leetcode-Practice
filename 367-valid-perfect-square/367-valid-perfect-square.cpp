class Solution {
public:
    bool isPerfectSquare(int num) {
    long long int i = 0,sum=0;
        while(i<num)
        {
            sum+=(2*i+1);
            if(sum==num)
            {
                return true;
            }
            if(i>pow(2,16))
            {
                break;
            }
            i++;
        }
        return false;
    }
};