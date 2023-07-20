#include<simplecpp>
main_program{
 int n;
 float mix=0 , avg_x=0 , avg_y=0,x,y;
 cin>>n;
 repeat(n)
 { cin>>x>>y;
   mix = mix +x*y/n;
   avg_x = avg_x +(x/n);
   avg_y = avg_y +(y/n);
 };
 cout << fixed;
 cout.precision(2);
 cout << mix - avg_x*avg_y;

}
