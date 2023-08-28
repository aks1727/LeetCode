class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> tmp;
        string ns="";
        for(int i = 0 ; i < text.size();i++)
        {
            if(text[i]==' '){
                tmp.push_back(ns);
                ns="";
            }
            else{
                ns.push_back(text[i]);
            }
        }
        tmp.push_back(ns);
        ns="";
        vector<string> result;
        for(int i = 2 ; i < tmp.size() ;i++)
        {
            if(tmp[i-2]==first and tmp[i-1]==second)
            {
                result.push_back(tmp[i]);
            }
        }
        return result;
    }
};