#include<bits/stdc++.h>
using namespace std;
void PrintNames(int i,int n)
{
  if(i>n)
   return;
   cout<<i<<"\n";
   PrintNames(i+1,n);
}
int main()
{
    int i=1,n;
    cin>>n;
    PrintNames(i,n);
  return 0;
}
