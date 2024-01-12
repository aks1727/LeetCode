class Solution {
public:

    bool checkV(char ch)
    {
        if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int c1 = 0 , c2=0;
        for(int i = 0 ; i < s.size()/2;i++)
        {
            if(checkV(s[i]))c1++;
        }
        for(int i = s.size()/2 ; i < s.size();i++)
        {
            if(checkV(s[i]))c2++;
        }
        return c1==c2;
    }
};