#include<simplecpp>

int catalan(int n)
 {
  if(n==0)return 1;
  if(n==1)return 1;
  else{
   int k =0;
   for(int i=0;i<=n-1;i++){k=k+(catalan(i)*catalan(n-i-1));}
   return k;
  }
 }

 main_program{
 int n;
 cin>>n;
 cout<<catalan(n);
 }
