#include<simplecpp>
main_program{
char opt,inp ='q';
int alpha= 0;
cin >>opt;
if(opt == 'd') //number to alphabet
  {
  while(inp != '$'){
  cin>>inp;
  while(inp != '#')
   {
    int r = inp -48;
    alpha = alpha*10 +r;
    cin>>inp;
   }
   char op;
   if(alpha > 0 && alpha<27)
   op = 64 +alpha;
   else
   op = alpha - 32 +96;
   cout<<op;
   alpha =0;
   }
  }
 else if (opt == 'e')
  {
  cin>>inp;
  while(inp != '$')
   {

    int dec = inp ;
    if(dec > 64 && dec < 91)
    dec = dec -64;
    else
    dec = dec -96 +32;
    cout<<dec<<"#";
    cin>>inp;
   }
  }
}


