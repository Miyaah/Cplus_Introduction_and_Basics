#include <iostream>

#include <cmath> //give us access to all the mathematical functions that are present inside c++ if you dont write this line of code you will not be able to perform those mathematical calculation on C++. 

using namespace std;

#if 0 //Basic line of Code
int main()
{
  cout << "welcome" << endl;
  cout << "hello user 123!!"  << endl; // cout is basically like print, endl means end of the line.
  cout << "my name is word codeblock" << endl;

  return 0; // end of the functions.
}
#endif // #if 0 and #endif  <-for diabling some part of code

#if 0//Basic data Storage
int main() //basic data storage inside of variables
{
  string food1 = " pizza ";
  string food2 = " sushi ";
  string food3 = " ramen ";

  cout << food1<<food2<<food3<< endl;
  
  cout <<"Mixng String (variable) with line of word"<< endl;

  cout <<"Today I ate"<<food2<< endl;
  cout <<"I really love" <<food3<< endl;
  cout << food3<< "is great"<< endl;

  cout<<"my favorite food is" << food1 << "then it's " << food2 << "fainally it's " << food3<<endl;


  return 0; 
}
#endif

#if 0 //Text and Function (few operations that you can perform on strings)
int main()
{
string try1 = "a simple sentence hello hi 12 34 567";
double size1 =try1.size();
int find1 = try1.find("he",0); //you can find the element of the word you want to find example is "he" from hello the output should be "18" since the word "h" number 18th from the word a or element zero. 

try1[3]='X'; //sample of changing the sentence inside sting (the variable try1) the index "3" the letter "i" of the word simple so we change it on "X" without touching the sentence inside the string.


try1.clear(); //furthermore you can delete the sentence/evertything inside the variable  by adding .clear() on varible that you want to delete and output should be zero or empty. 


cout <<try1<<endl; //the cout object in c++ is used to display the output to the output device 
//for example changing the variable "try1" to "find1" you will get a different output.

  return 0;
}
#endif

#if 0 //Basic of the numbers #1 integers and doubles

int main()
{
double a = 34;
double b = 56.7;
double c = 95.45;
double d = 87.23;

double x = a + b; //better to use "double" when doing mathematical function you 
//you can also change the +(addition) to - , / , * 
double y = c*d;
double z = c + x/a+(b+c)*9;  //you can also make a complicated calculation. 

cout <<z<< endl; //output of "x" you can alway change the output for different answer.

  return 0;
}
#endif

#if 0 //Basic of the numbers #2 

int main()
{
double a = 34;
double b = 56.7;
double c = 95.45;
double d = 87.23;

double x = a + b;
double y = c * d;
double z = c + x/a+(b+c)*9; 

double op1 = min(a,b);  //here you can find which is the smaller value bettween variable a and b, output should be 34 of a.
//change the "min" to "max" find out the greatest number between those two which is the output should be 56.7 of variable b.

double op2 = pow(a,3); // for calculating power a to 3
double op3 = sqrt(25); // for square root 

cout <<op3<< endl; //output of "x" you can alway change the output for different answer.

  return 0;
}
#endif

#if 0 // making small monologue (contains variable, integers, and strings.)
int main()
{
 
  string name = "Bob";
  cout <<"Hello "<< name <<endl;
  int val1 = 2;
  int val2 = 12;
  cout <<"You ate "<<min(val1,val2)<<" slices of pizza and it cost you " <<max(val1,val2)<< " dollars !"<< endl;
  string ex1 = "run";
  int val3 = 30;
  int val4 = 200;
  cout <<"You have also " <<ex1<< " for about " << min (val3,val4)<< " minutes and you have burned " <<max(val3,val4)<< " Callories !"<< endl;
  int val5 = 500;
  cout << "Your calorie intake was of " <<val5-val4<< " calories!";

//the output should be 
//Hello Bob
//You ate 2 slices of pizza and it cost you 12 dollars !
//You have also run for about 30 minutes and you have burned 200 Callories !
//Your calorie intake was of 300 calories!


  return 0;
}
#endif

#if 0 // making small monologue (Clean Version)
int main()
{
  string name = "Bob";
  int val1 = 2;
  int val2 = 12;
  string ex1 = "run";
  int val3 = 30;
  int val4 = 200;
  int val5 = 500;

  //for writing a clean code the first step is writing down all of your variable on top and the line of code below.

  cout <<"Hello "<< name <<endl;
  cout <<"You ate "<<min(val1,val2)<<" slices of pizza and it cost you " <<max(val1,val2)<< " dollars !"<< endl;
  cout <<"You have also " <<ex1<< " for about " << min (val3,val4)<< " minutes and you have burned " <<max(val3,val4)<< " Callories !"<< endl;
  cout << "Your calorie intake was of " <<val5-val4<< " calories!";

  return 0;
}
#endif


int main()
{
  cout << "testing on GIT" << endl;

  return 0; // end of the functions.
}