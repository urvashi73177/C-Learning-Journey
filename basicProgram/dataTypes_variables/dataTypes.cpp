/* 
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99

char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

string - stores text, such as "Hello World". String values are surrounded by double quotes

bool - stores values with two states: true or false

 */

#include <iostream>
using namespace std;
int main(){
  int a = 123;
  cout<<a<<'\n';

  char b = 'b';
  cout<<b<<'\n';

  int mynum;
  mynum=10;
  cout<<mynum<<'\n';

  int x,y,z;
  x=y=z=50;
  cout<<x,y,z<<'\n';

  bool bl = true;
  cout<< bl <<'\n';

  float f = 1.2;
  cout<<f<<'\n'; 

  int size = sizeof(a);
  cout<<"size of a is "<< size <<'\n';

//TypeCasting
  int c = 'c';
  cout << c <<'\n';

  char ch = 98;
  cout<<ch<<'\n';
}

