class Solution {
public:
    string reorganizeString(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        char max_freq;
        int maxi=INT_MIN;
        for(int i=0;i<26;i++){
            if(hash[i]>maxi){
                maxi=hash[i];
                max_freq=i+'a';
            }
        }
        int ind=0;
        while(maxi>0 && ind<s.size()){
            s[ind]=max_freq;
            maxi--;
            ind+=2;
        }
        if(maxi!=0)return "";
        hash[max_freq - 'a']=0;
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                ind=ind>=s.size()?1:ind;
                s[ind]=i+'a';
                hash[i]--;
                ind+=2;
            }
        }
        return s;
    }
};