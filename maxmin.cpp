#include<simplecpp>

main_program{
int a,b,c;
cin>>a>>b>>c;
int mx , mn;
if (a>b)
 {
  if (a>c)
  {
  mx =a;
  if (b>c)
  mn = c;
  else
  mn = b;
  }
  else
  {
  mx =c;
  mn =b;
  }
 }
 else
  {
  if (b>c)
  {
  mx =b;
  if (a>c)
  mn = c;
  else
  mn = a;
  }
  else
  {
  mx =c;
  mn =a;
  }
  }
  cout << mx - mn;
  }
