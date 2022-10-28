class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        
        int n=x;
        long int r=0;
        while(n>0)
        {
            r=r*10+ (n%10);
            n=n/10;
        }
        
        if(r==x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
            
    }
};
