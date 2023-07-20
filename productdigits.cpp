#include<simplecpp>

main_program{
int n,d,prdt =1;
cin>>n;
while(n > 0)
 {
 d = n%10;
 n= n/10;
 prdt = prdt *d;
 }
cout<<prdt;
}
