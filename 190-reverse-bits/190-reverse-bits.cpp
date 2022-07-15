class Solution {
public:
    string convert(uint32_t m)
    {
        string y="";
        while(m>0)
        {
            y+=to_string(m%2);
            m/=2;
        }
        return y;
    }
    uint32_t reverseBits(uint32_t n) {
        string y = convert(n);
        uint32_t m =0;
        for(int i=0;i<y.length();i++)
        {
            m+=pow(2,32-i-1)*(y[i]-'0');
        }
        return m;
    }
};