#include<simplecpp>

bool check(int kx,int ky,int qx, int qy)
{
 if(kx==qx||ky==qy||abs(kx-qx)==abs(ky-qy))
  return false;
  else return true;
}

int safe(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int x5,int y5)
{
  int op =72;
  int temp=-1;
  for(int i =1;i<9;i++)
  {
   for(int j =1;j<9;j++)
    {
     if(check(i,j,x1,y1)&&check(i,j,x2,y2)&&check(i,j,x3,y3)&&check(i,j,x4,y4)&&check(i,j,x5,y5))
      {temp = 8*i +j; if(op>=temp)op=temp;  };
    }
  }
  if(temp!=-1)
  return op;
  else
  return -1;
}
