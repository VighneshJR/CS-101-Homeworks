#include<simplecpp>

void bank_management(int A, int B, int C)
{
 int n,a=A,b=B,c=C,amt;
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
       a=a-amt;
       if(rec=='B')
       b=b+amt;
       else
       c =c+amt;
       cout<<"Valid"<<endl;
      }
      else
      cout<<"Invalid"<<endl;
      break;
     }
     case 'B':
     {
      if (amt <= b)
      {
       b=b-amt;
       if(rec=='A')
       a=a+amt;
       else
       c =c+amt;
       cout<<"Valid"<<endl;
      }
      else
      cout<<"Invalid"<<endl;
      break;
     }
     case 'C':
     {
      if (amt <= c)
      {
       c=c-amt;
       if(rec=='B')
       b=b+amt;
       else
       a=a+amt;
       cout<<"Valid"<<endl;
      }
      else
      cout<<"Invalid"<<endl;
      break;
     }
     default:;
   }
  }

  cout<<"A "<<a<<endl<<"B "<<b<<endl<<"C "<<c;

}


