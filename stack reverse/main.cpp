#include <iostream>
#include <string.h>
#include <stack> // Standard library for creating stack

using namespace std;

void reverse(char *str, int len)
{
 stack<char> s;
 int i;

 // Push into a stack
 for(i = 0; i < n; i++)
  s.push(str[i]);

 // Pop from a stack
 for(i= 0; i < n; i++)
 {
  str[i] = s.top();
  s.pop();
 }

}

int main()
{

   char str[]="FLOWER";
   int n = str n(str);

   reverse(str, n);

   cout <<"After reversing a string \n" << str;

   return 0;
}
