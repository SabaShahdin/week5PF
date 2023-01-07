# include<iostream>
# include<cmath>
using namespace std;
float calculateHeight(float distance , float degrees);
main()
{
 float distance;
 float degrees;
 float height;
 cout<<"entre base...";
 cin>>distance;
 cout<<"entre angle of evaltion..";
 cin>>degrees;
 height = calculateHeight(distance ,degrees);
 cout<<"height is ..."<<height;


}
 float calculateHeight(float distance , float degrees)
{
 float radian = 57.2958;
 float angle;
 float radians;
 float height;
 
 radians = degrees / radian;
 angle = tan(radians);
 height = angle * distance;
 return height;
}
 
