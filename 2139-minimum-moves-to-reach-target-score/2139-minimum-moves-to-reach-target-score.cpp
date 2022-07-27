class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int steps = 0;
        while(target!=1)
        {
            if(target%2==1 or maxDoubles==0)
            {
                if(maxDoubles==0)
                {
                    steps+=target-1;
                    break;
                }
                target--;
            }
            else if(target%2==0 and maxDoubles>0)
            {
                target/=2;
                maxDoubles--;
            }
            steps++;
        }
        return steps;
    }
};