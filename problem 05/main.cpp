#include <iostream>
using namespace std;

int main()
{
    int factorial= 1;
    int num;
    cout<<"Enter the number for factorial: ";
    cin>>num;
    if (num==0 || num==1)
    {
        cout<<"Error! its not a prime number "<<endl;

    }
    else
    {
        if (num== 2||num % 2 !=0)
        {
            for(size_t i=1; i<= num; i++)
            {
                factorial= factorial * i;

            }
            cout<<factorial<<endl;
        }
        else
        {
            cout<<"Error! its not prime number "<<endl;

        }
    }
    return 0;

}
