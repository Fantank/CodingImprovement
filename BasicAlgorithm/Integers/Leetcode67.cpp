#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //method1:simulating
    string addBinary(string a, string b) {
       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       
       int pa=0,pb=0,add=0;
       string res="";
       while(pa<a.length()||pb<b.length()||add!=0)
       {
            int na=(pa>=a.length())?0:a[pa]-'0';
            int nb=(pb>=b.length())?0:b[pb]-'0';
            int sum=na+nb+add;
            add=(sum>=2)?1:0;
            sum=(sum>=2)?sum%2:sum;
            res+=('0'+sum);
            pa++;pb++;
       }
       reverse(res.begin(),res.end());
       return res;
    }
};

int main()
{
    Solution S;
    cout<<S.addBinary("1","1");
}