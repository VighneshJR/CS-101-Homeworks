#include <simplecpp>
void transact(int n, int *x, int *a, int *b)
 {
  int *d;
  d=a;
  char cmd;
  while(n>0)
   {
    cin>>cmd;
    switch(cmd)
     {
      case 'P':
       {*x=*x -1;*d=*d +1;break;}
      case 'R':
       {*x=*x +1;*d=*d -1;break;}
      case 'S':
       {if(d==a)d=b;else d=a;break;}
       default :
       break;
     }
    n=n-1;
   }
   return;
 }

