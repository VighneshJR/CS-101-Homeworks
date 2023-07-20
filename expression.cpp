#include<simplecpp>

main_program{
int n;
float d , result;
cin >>n;
d =1;
while(n>1)
 {
 d = n*(1+1/d);
 n=n-1;
 }
 result = 1/d;
 cout<<fixed;
 cout.precision(4);
 cout << result;
 }
