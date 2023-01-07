# include<iostream>
using namespace std;

string printCapitalCharacter (char letter);
 string printSmallLetter (char letter) ;

main()
{
  char letter;
  string  result;
  string result2;
  cout<<"entre alphabets any small or capital..";
  cin>>letter;
 if(letter>='A' && letter<='Z')
 {
  result = printCapitalCharacter (letter);
   cout<<result <<letter;
 }
  if(letter>='a' && letter<='z')
 {
 result2 = printSmallLetter (letter);
 cout<<result2 <<letter;
 }
}
string  printCapitalCharacter (char letter)
{
  string result;
  result = "YouHaveEnteredCapital";
  if(letter>='A' && letter<='Z')
  {
     return result;
  }
}
 string printSmallLetter (char letter)
{
   string result2;
   result2 = "you have entered small "; 
   if(letter>='a' && letter<='z')
    {
      return result2;
    }
 return 0;
}