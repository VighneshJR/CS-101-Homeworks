#include<simplecpp>

main_program{
int a,b,c,x1,y1,x2,y2;
cin>>a>>b>>c>>x1>>y1>>x2>>y2;
int f1 = a*x1 +b*y1 +c , f2 = a*x2 +b*y2 + c;
if (f1*f2 > 0)
cout<< 1;
else if(f1*f2 ==0)
cout<<2;
else
cout << 0;
}
