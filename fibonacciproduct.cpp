#include<simplecpp>

main_program{
int n,prdt =1, f1 =0,d,f2=1;
cin>>n;
repeat(n-1)
 {
  d = f2;
  f2 = f2 + f1;
  f1=d;
  prdt = prdt*f2;
 };
 cout<<prdt;
}
