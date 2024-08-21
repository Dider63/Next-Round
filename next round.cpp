#include<iostream>
using namespace std;
int main()
{
int n,i,k,s=0;
cin>> n>>k;
cin.ignore();
int a[n];
if(n>=k &&
   n>=1 && n<=50 &&
   k>=1 && k<=50)
{
  for(i=1;i<=n;i++)
{
  cin>> a[i];
}

for(i=1;i<=n;i++)
{
    if(a[i]>=0 && a[i]<=100 && a[i]>=a[k])
  {
      //cout<<a[k];
      if(a[i]!=0)
      {
        s++;
      }

  }
}
cout<< s;
}
    return 0;
}
