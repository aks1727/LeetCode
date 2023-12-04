class Solution {
public:
    string largestGoodInteger(string num) {
        string mx = "";
        for(int i =1; i < num.size()-1 ;i++)
        {
            if(num[i]==num[i+1] and num[i]==num[i-1])
            {string x="";
            x+=num[i-1];
            x+=num[i];
            x+=num[i+1];
            cout<<x <<" "<< i << endl;
            mx = max(x,mx);}
        }
        return mx;
    }
};