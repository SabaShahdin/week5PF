# include<iostream>
using namespace std;
int value5(int x); 

main()
{
   int x;
   int result;
   cout<<"entre any value";
   cin>>x;
   result = value5(x);
   cout<<" result is..."<<result;
}

int value5(int x)
{
 int multiply;
 multiply = x *5;
 return multiply;
}