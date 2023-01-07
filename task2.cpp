# include<iostream>
# include<cmath>
using namespace std;
float quadraticEquationX1(float a , float b , float c);
float quadraticEquationX2(float a , float b , float c);
main()
{
 float a ;
 float b ;
 float c ;
 float valueOfX1;
 float valueOfX2;
 cout<<"entre value of a...";
 cin>>a;
 cout<<"entre value of b...";
 cin>>b;
 cout<<"entre value of c...";
 cin>>c;
 valueOfX1 = quadraticEquationX1(a , b ,c);
 cout<<"value of x is ...."<<valueOfX1<<endl;
 valueOfX2 = quadraticEquationX2(a , b ,c);
 cout<<"value of x is ...."<<valueOfX2;

}


float quadraticEquationX1(float a , float b , float c)
{
 float  power;
 float  squareRoot;
 float  answer;
 float  valueOfX1;
 power = pow(b , 2);
 squareRoot = sqrt(power - (4 * a * c));
 answer     = -b + squareRoot;
 valueOfX1 = answer / (2 * a) ;
 return valueOfX1;
}
float quadraticEquationX2(float a , float b , float c)
{
 float  power;
 float  squareRoot;
 float  answer;
 float  valueOfX2;
 power = pow(b , 2);
 squareRoot = sqrt(power - (4 * a * c));
 answer     = -b - squareRoot;
 valueOfX2 = answer / (2 * a) ;
 return valueOfX2;
}
