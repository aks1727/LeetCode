class Solution {
public:
    
    string addBinary(string a, string b) {
        int i =  a.size()-1;
        int j = b.size()-1;
        int crr = 0;
        string res="";
        while(i >= 0 or j>=0)
        {
            int sum = crr; 
            if(i>=0) sum+=a[i--] -'0';
            if(j>=0) sum+=b[j--]-'0';
            crr = (sum>1) ? 1:0;
            res +=to_string(sum%2);
        }
        if(crr)res+=to_string(crr);
        reverse(res.begin(),res.end());
        return res;
    }
};