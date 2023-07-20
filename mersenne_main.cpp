#include <simplecpp>

 int is_valid_bracket_seq(int n)
  {
  int c=0,d=0,f=1;
  char seq;
  while(n>0)
   {
    cin>>seq;
    if(seq=='(')
    {c=c+1;
     d=d-1;}

    else
    {c=c-1;
     d=d+1;}
    if(c<0||d<0)
    f=0;
    n=n-1;
   }
   return f;
  }
