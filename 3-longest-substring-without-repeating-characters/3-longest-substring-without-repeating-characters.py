class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        p = str()
        n=len(s)
        if len(s)<=1:
            return n
        c =list()
        for i in range(n):
            for j in range(i,n):
                if s[j] not in p:
                    p=p+s[j]
                else:
                    print(p)
                    c.append(len(p))
                    p=''
                    break
        print(p)
        print(c)
        if len(c)==0:
            return len(p)
        return max(c)