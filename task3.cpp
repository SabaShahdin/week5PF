# include<iostream>
using namespace std;
bool symmetrical(int number);
main()
{
 int number;
 int result;
 cout<<"entre any three digit number ...";
 cin>>number;
 result =  symmetrical(number);
 if(result == true)
  {
    cout<<"number is symmetrical";
  }
 if(result == false)
 { 
   cout<<"number is not symmetrical";
 }
}

bool symmetrical(int number)
{
 int rem1;
 int div1;
 int rem2;
 int div2;
 rem1 = number % 10;
 div1 = number / 10;
 rem2 = div1 %  10 ;
 div2 = div1 / 10 ;
 if (rem1 == div2)
 {
   return true;
 }
  if(rem1 != div2)
 {
   return false;
 }
  return 0;
}