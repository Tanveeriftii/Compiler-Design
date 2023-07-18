#include <iostream>
using namespace std;

bool isValid(string str, int n)
{


    {


    if (((str[0] >= 'a' && str[0] <= 'c')
          || (str[0] >= 'A' && str[0] <= 'C')))
        return true;
    }

    for (int i = 1; i < str.length(); i++) {
        if (((str[i] >= 'a' && str[i] <= 'c')
              || (str[i] >= 'A' && str[i] <= 'C')))

   return true;
    }

    return false;
}


int main()
{

    string str;
    cin>>str;
    int n = str.length();

    if (isValid(str, n))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}
