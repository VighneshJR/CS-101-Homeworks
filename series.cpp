#include<simplecpp>
main_program{
double x , exp = 1, loga , term1 =1 , term2;
int n;
cin>>x>>n;
term2 = x;
loga =x;
for(int i =1 ;i <=n ;i++)
 {
  term1 = term1*x/i;
  exp =exp + term1 ;
 }
 for(int j =2 ; j <=n ;j++)
 {
  term2 = -term2*x*(j-1)/j;
  loga =loga + term2 ;
 }
 cout << fixed;
cout.precision(5);
cout << exp*loga;
}
