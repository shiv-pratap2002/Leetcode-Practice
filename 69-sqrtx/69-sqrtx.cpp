class Solution {
public:
    int mySqrt(int x) {
        if(x==0 or x==1)
        {
            return x;
        }
        int max_sqrt = int(sqrt(pow(2,31)-1));
        int i;
        int high= max_sqrt,low=0;
        while(high>=low)
        {
            i = (high+low)/2;
            if(i*i>x)
            {
                high=i-1;
            }
            else if(i*i<x)
            {
                if( i ==  max_sqrt or (i+1)*(i+1)>x )
                {
                    return i;
                }
                low=i+1;
            }
            else
            {
               return i;
            }
            cout<<low<<' '<<high<<'\n';
        }
        return i;
    }
};