#include<simplecpp>

#include<simplecpp>
int raise(int n)
{
 int j =1;
 repeat(n){j=j*10;};
 return j;
}

void bank_management(int a, int b, int c)
{
 int n,amt,f=0;
 cin>>n; //no of transactions
 char dona,rec;
 repeat(n)
  {
   cin>>dona>>rec>>amt;
   switch(dona)
   {
    case 'A':
     {
      if (amt <= a)
      {
       f=f*10 + 2;
       a=a-amt;
       if(rec=='B')
       b=b+amt;
       else
       c =c+amt;
      }
      else
      f =f*10 + 1;
      break;
     }
     case 'B':
     {
      if (amt <= b)
      {
       f=f*10 + 2;
       b=b-amt;
       if(rec=='A')
       a=a+amt;
       else
       c =c+amt;
      }
      else
      f =f*10 + 1;
      break;
     }
     case 'C':
     {
      if (amt <= c)
      {
       f=f*10 + 2;
       c=c-amt;
       if(rec=='B')
       b=b+amt;
       else
       a=a+amt;
      }
      else
      f =f*10 + 1;
      break;
     }
     default:;
   }
  }
  repeat(n)
  {
   int k = f / raise(n-1);
   f =f % raise(n-1);
   if(k==2)
   cout<<"Valid"<<endl;
   else
   cout<<"Invalid"<<endl;
   n--;
  }
  cout<<"A "<<a<<endl<<"B "<<b<<endl<<"C "<<c;

}


main_program
{
    int balanceA,balanceB,balanceC;
    cin>>balanceA>>balanceB>>balanceC;
    bank_management(balanceA, balanceB, balanceC);
}
