class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n<=1)
        {
            return true;
        }
        int y=1;
        while(y<n)
        {
            if(y>0)
            {
            if(y%2==1)
            {
                y<<=1;
            }
            else
            {
                y<<=1;
                y+=1;
            }
            }
            else{
                break;
            }
        }
        if(y==n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};