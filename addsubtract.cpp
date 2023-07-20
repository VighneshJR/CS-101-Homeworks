#include<simplecpp>

main_program{
int n,s=0;
cin>>n;
repeat(n)
{
int p;
cin>>p;
s = s - p*pow(-1,p);
}
cout<<s;
}
