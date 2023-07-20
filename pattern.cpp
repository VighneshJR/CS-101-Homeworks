#include<simplecpp>
/*int fact(int n)
{
 if(n==0)
 return 1;
 else
 {
  int j=1;
  for(int i=1;i<=n;i++)
  j =j *i;
  return j;
  }
}*/
int comb(int n,int r)
 {
  int c;
  if(r==0||r==n)
  return 1;
  else
  {
  //c = fact(n)/(fact(r)*fact(n-r));
  c = n*comb(n-1,r-1)/r;
  return c;}
 }
main_program{
int n;
cin>>n;
for(int i =0;i<n-1;i++)
{
 for(int j =0;j<=i;j++)
 cout<<comb(i,j)<<" ";
 cout<<endl;
};
for(int j =0;j<=n-1;j++)
 cout<<comb(n-1,j)<<" ";

;}
