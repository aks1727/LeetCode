class Solution {
public:
    int appendCharacters(string s, string t) {
        // question said to append this is the catch 
        //means we can not put anything in between the original string
        
        int i = 0 ,j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return t.size()-j;
    }
};