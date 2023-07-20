#include<simplecpp>

main_program{
int n,comp_1,comp_2,dot_product=0;
cin>>n;
repeat(n)
 {
 cin>>comp_1>>comp_2;
 dot_product= dot_product + comp_1*comp_2;
 }
 cout << dot_product;
 }
