#include<simplecpp>

main_program{
int n,i=1;
cin>>n;
repeat(n)
 {
  repeat(n-i)
  {cout<<"!";};
  repeat(2*i-1)
  {cout<<"$";};
  repeat(n-i)
  {cout<<"!";};
  cout<<endl;
  i=i+1;
 };
}
