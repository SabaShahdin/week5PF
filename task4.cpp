# include<iostream>
using namespace std;
int evenOrOdd(int number);

main()
{
 int number ;
 int answer;
 cout<<"entre any number ...";
 cin>>number;
 answer = evenOrOdd( number );
  if(answer % 2 == 0)
 {
   cout<<" evenish";
 }
 if(answer % 2 != 0)
 {
   cout<<"oddish";
 }
}
 
int evenOrOdd(int number)
{
 int rem1;
 int rem2;
 int rem3;
 int div1;
 int div2;
 int div3;
 int rem4;
 int div4;
 int answer;
 rem1 = number % 10;
 div1 = number / 10;
 rem2 = div1 %  10 ;
 div2 = div1 / 10 ;
 rem3 = div2 % 10;
 div3 = div2 / 10;
 rem4 = div3 % 10;
 div4 = div3 / 10;
 answer = rem1 + rem2 + rem3 + rem4 + div4;
 return answer;
}