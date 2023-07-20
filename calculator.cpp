#include<simplecpp>
main_program{
 float inp,op;
 char oprt  = 'a';
 cin >> op >> oprt;

 while(oprt != '=')
  {
  switch(oprt)
   {
    case '+':
    {cin>>inp; op = op + inp; break; }
    case '-':
    {cin>>inp; op = op - inp; break; }
    case '/':
    {cin>>inp; op = op / inp; break; }
    case '*':
    {cin>>inp; op = op * inp; break; }
    default:
    break;
   }
   cin>>oprt;
  }
  cout << fixed;
  cout.precision(2);
  cout<<op;
}
