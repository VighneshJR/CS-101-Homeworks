#include <simplecpp>
float a(float t,float v)
 {
  return 1+(v-t)*(v-t);
 }
void calculate_velocity(float h, float &v)
 {
  v=4.75;
  float t=5;
  int n = 10/h;
  for(int i=1;i<=n;i++)
   {
    v= v + h*a(t+h/2,v+h*a(t,v)/2);
    t =t+h;
   }
 }
