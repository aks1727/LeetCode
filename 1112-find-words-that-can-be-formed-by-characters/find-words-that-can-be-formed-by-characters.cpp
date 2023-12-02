class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mp;
        unordered_map<char,int> temp;
        for(char c : chars)
        {
            mp[c]++;
        }
        temp = mp;
        int cnt =0;
        for(int i = 0 ; i < words.size() ;i++)
        {
            bool canForm = true;
            for(char ch : words[i])
            {
                if(temp[ch]==0)
                {
                    canForm= false;
                    break;
                }
                else{
                    temp[ch]-=1;
                }
            }
            if(canForm){
                cnt+=words[i].size();
            }
            temp = mp;
        }
        return cnt;
    }
};