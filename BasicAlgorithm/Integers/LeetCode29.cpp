#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

//Method1: Simple, but overtime
    int divide(int a, int b) {
        int quotient=0;
        while(a>=b)
        {
            quotient++;
            a-=b;
        }
        cout<<quotient;
    }

//Method2:  Simple power
};

int main()
{
    Solution S;
    S.divide(10,5);
    S.divide(12,5);
    S.divide(5,10);
}