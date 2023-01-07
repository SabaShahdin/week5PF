# include<iostream>
using namespace std;
float divide(float number1 , float number2);
int maximum (int number1 , int number2);

main()
{
 float num1;
 float num2;
 float result;
 int greater;
 cout<<"entre number1....";
 cin>>num1;
 cout<<"entre number 2 ..";
 cin>>num2;
 result= divide(num1 , num2);
 cout<<"answer is..."<<result<<endl;
 greater = maximum(num1 , num2);
 cout<<greater<<"the greater number is...."<<endl;

}
 
float divide(float number1 , float number2)
{
 float total;
 total = number1 / number2;
 return total;
}
int maximum (int number1 , int number2)
{
    if(number1-number2>0)
   {
     return number1;
   }
    if(number1-number2<0)
   {
     return number2;
   }
   return 0;
}