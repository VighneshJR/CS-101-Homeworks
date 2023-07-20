#include<simplecpp>
main_program{
int n , b1 ,b2,dec =0 , op=0 ;
cin>>n>>b1>>b2;
int i =0, dum = n ,rem =0;
while (dum >0)
 {
 rem =dum%10;
 dec = dec + rem*pow(b1,i);
 dum = dum/10;
 i++;
 }
 i =0;


while(dec>0)
 {
  rem = dec%b2;
  dec = dec/b2;
  op= op + rem*pow(10,i);
  i++;
 }

cout<<op;

 }

