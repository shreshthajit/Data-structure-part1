#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<string>
#include<stdio.h>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it;
    for(int i=1;i<=100;i++)
    {
        v.push_back(i);
    }
      for(int i=0;i<v.size();i++)
    {
         cout<<v[i]<<"\t";
    }
    printf("\n");
    for(it=v.begin();it !=v.end();it++)
{
    cout<<*it <<endl;
}


    return 0;
}
