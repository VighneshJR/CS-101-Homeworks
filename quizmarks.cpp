#include<simplecpp>

main_program{
int n,maxi=0,mini=5,ct0=0,ct1=0,ct2=0,ct3=0,ct4=0,ct5=0,m;
cin>>n;
repeat(n)
{
 cin>>m;
 switch(m)
  {
   case 0:
   {mini =0 ; ct0 = ct0+1;break;}
   case 1:
   {if (mini>=1) mini =1;if (maxi <=1) maxi =1; ct1 =ct1+1;break;}
    case 2:
   {if (mini>=2) mini =2;if (maxi <=2) maxi =2; ct2=ct2+1;break;}
    case 3:
   {if (mini>=3) mini =1;if (maxi <=3) maxi =3; ct3=ct3+1;break;}
    case 4:
   {if (mini>=4) mini =1;if (maxi <=4) maxi =4; ct4 =ct4+1;break;}
    case 5:
   { maxi =5; ct5=ct5+1;break;}
   default:
   break;
  }
}
  cout<< maxi <<" "<<mini<<" "<<ct0<<" "<<ct1<<" "<<ct2<<" "<<ct3<<" "<<ct4<<" "<<ct5;
}
