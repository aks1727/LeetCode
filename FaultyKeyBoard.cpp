#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string finalString(string s) {
        string  ns = "";
        for(int i = 0 ; i < s.size() ;i++)
        {
            if(s[i]=='i')
            {
                reverse(ns.begin(),ns.end());
            }
            else ns.push_back(s[i]);
        }
        return ns;
    }
};

int main()
{
  string s;
  cin >> s;
  Solution obj;
  cout<< obj.finalString(s);
}
