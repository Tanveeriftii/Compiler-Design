#include <iostream>
#include <string>
using namespace std;
bool op(string str) {
    string outp;
   for (int i = 0; i < str.length(); i++)
   {
      if (str[i] == '%' || str[i] == '/' || str[i] == '*' || str[i] == '+' || str[i] == '-' || str[i] == '=')
      {
      string a(1, str[i]);
      outp.append(a);
      }

   }
      cout << "Operators are: " << outp;
      return 0;
}
int main() {
   string str;
   cout << "Enter a string: ";
   cin >> str;
   op(str);
   return 0;
}
