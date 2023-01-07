# include<iostream>
using namespace std;
int add(int num1 , int num2);

main()
{
 int number1;
 int number2;
 int total;
 cout<<"entre number 1...";
 cin>>number1;
 cout<<"entre number 2...";
 cin>>number2;
 total = add(number1 , number2);
 cout<<"sum is..."<<total;
}
 int add(int num1 , int num2)
{
 int sum;
 sum = num1 + num2;
 return sum;
 
}

