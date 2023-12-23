class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,int>mp;
        int x=0,y=0;
        mp[{x,y}]=1;
        for(char ch: path)
        {
            if(ch=='N')
            {
                y+=1;
            }
            else if(ch=='E')x+=1;
            else if(ch=='W')x-=1;
            else if (ch=='S')y-=1;
            if(mp[{x,y}]==1)return 1;
            mp[{x,y}]=1;
        }
        return 0;
    }
};