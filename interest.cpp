#include<simplecpp>

main_program{
int a,d;
cin>>a>>d;
if (d< 46)
 {
 if (a<60)
  {
  cout << fixed;
  cout.precision(2);
  cout << 5.00;
  }
  else
  {
  cout << fixed;
  cout.precision(2);
  cout << 5.50;
  }
 }

 else if (d<181)
  {
    if (a<60)
   {
   cout << fixed;
   cout.precision(2);
   cout << 5.25;
   }
   else
   {
   cout << fixed;
   cout.precision(2);
   cout << 5.75;
   }
  }

  else if (d<211)
  {
    if (a<60)
   {
   cout << fixed;
   cout.precision(2);
   cout << 5.50;
   }
   else
   {
   cout << fixed;
   cout.precision(2);
   cout << 6.00;
   }
  }

  else if (d<366)
  {
    if (a<60)
   {
   cout << fixed;
   cout.precision(2);
   cout << 5.75;
   }
   else
   {
   cout << fixed;
   cout.precision(2);
   cout << 6.25;
   }
  }

  else
  {
    if (a<60)
   {
   cout << fixed;
   cout.precision(2);
   cout << 6.00;
   }
   else
   {
   cout << fixed;
   cout.precision(2);
   cout << 6.50;
   }
  }
}
