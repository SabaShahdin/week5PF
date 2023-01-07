# include<iostream>
using namespace std;

 int timeGreater59(int hours , int add );
 int timeGreater59M(int add);
 int hourGreater23 (int hour , int minute);
 
main()
{
 int hours;
 int minutes;
 int add;
 int hour;
 int minute;
 int houres;
 int time;
 cout<<"entre hour time...";
 cin>>hours;
 cout<<"entre minutes ...";
 cin>>minutes ;
 add = minutes + 15;

  if(add > 60)
{
 hour = timeGreater59(hours , add);
 minute = timeGreater59M(add);
 cout<<"time is ..."<<hour<<":"<<minute<<endl;
}
  if(hour >= 23)
 {
   houres = hourGreater23 (hour , minute);
   cout<<"time is ..."<<houres<<":"<<minute<<endl;
}
}
 int timeGreater59(int hours , int add)
{
   int hour;
   hour = hours + 1;
   return hour ;
}
 int timeGreater59M(int add)
{
  int minute;
  minute = add - 60;
  return minute;
}
 int hourGreater23 (int hour , int minute )
{
  int houres;
  houres = hour - 24;
  return houres;
}