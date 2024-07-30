class Solution {
public:
    string addStrings(string num1, string num2) {
        string ns="";
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i =0,j=0;
        int crr=0;
        while(i<num1.size() && j<num2.size()){
            int s = (num1[i++]-48)+(num2[j++]-48);
            if(crr){s+=crr;crr=0;}
            if(s>=10)crr=s/10;
            s%=10;
            ns+=to_string(s);

        }
        while(i<num1.size()){
            int s = (num1[i++]-48);
            if(crr){s+=crr;crr=0;}
            if(s>=10)crr=s/10;
            s%=10;
            ns+=to_string(s);
        }
        while(j<num2.size()){
            int s = num2[j++]-48;
            if(crr){s+=crr;crr=0;}
            if(s>=10)crr=s/10;
            s%=10;
            ns+=to_string(s);
        }
        if(crr){
            ns+=to_string(crr);
        }
        reverse(ns.begin(),ns.end());
        return ns;
    }
};