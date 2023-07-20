#include<simplecpp>

main_program{
int n,d,fwd,rev=0;
cin>>n;
fwd = n;
while(fwd > 0)
 {
 d = fwd%10;
 fwd= fwd/10;
 rev = rev*10 +d;
 }
if (n == rev)
cout << 1;
else
cout <<0;
}
