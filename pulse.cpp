#include<simplecpp>

main_program{
turtleSim();
repeat(8)
 {
 int a;
 cin>>a;
 int k;
 k = a%2;
 left(90);
 forward(25*k);
 right(90);
 forward(25);
 right(90);
 forward(25*k);
 left(90);
 };
 wait(10);
 }


