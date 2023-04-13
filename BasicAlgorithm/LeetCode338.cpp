#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.emplace_back(0);
        if(n>0)
        res.emplace_back(1);

        if(n>1)
        {
            for(int i=2;i<=n;i++)
            {
                //int sum=(i%2==1)?(res[i/2]+1):res[i/2];
                int sum=(i&1)?(res[i>>1]+1):res[i>>1];
                res.emplace_back(sum);
            }
        }    
        vector<int>::iterator it;
        for(it=res.begin();it!=res.end();it++)
            cout<<*it;
        return res;
    }
};

int main()
{
    Solution S;
    S.countBits(5);
}