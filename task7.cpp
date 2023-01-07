# include<iostream>
using namespace std;

main()
{
 int number;
 string s,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17;
 cout<<"entre any number...";
 cin>>number;
 if(number /10 == 2)
  {
   s1=" twenty";
}
 if(number /10 == 3)
  {
    s2 = "thirty";
  }
  if(number /10 == 4)
  {
   s3 = "forty";
  }
  if(number/10 == 5)
  {
   s4 = "fifty";
  }
  if(number /10 == 6)
  {
   s5 = "sixty";
  }
  if(number /10 ==7)
  {
   s6 = "seventy";
  }
  if(number / 10 == 8)
  {
   s7 = "eighty";
  }
  if(number/10 == 9)
  {
   s8 = "ninety";
  }

 if(number % 10 == 1)
 {
  s9 = " one";
 }
 if(number % 10 ==2)
  {
   s10 = " two";
  } 
 if(number % 10 ==3)
  {
   s11 = " three";
  }
 if(number % 10 ==4)
 {
  s12=" four";
 }
 if(number % 10 == 5)
 {
   s13 = " five";
 }
 if(number %10 ==6)
 {
  s14 = " six";
 }
 if(number % 10 ==7)
  {
   s15 = " seven";
  }
 if(number % 10 == 8)
 {
  s16 = " eight";
 }
 if(number% 10 == 9)
{
  s17 = " nine";
}

  s = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12+s13+s14+s15+s16,s17;
  cout<<s;
}