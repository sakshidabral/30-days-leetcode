class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int c=x,num=0;
        while(c!=0)
        {
            int r=c%10;
            num=(num*10)+r;
            c=c/10;
        }
        if(x==num && x>=0)
        return true;
        else
        return false;
    }
};