#include <iostream>
#include <cstring>
#include<stack>
using namespace std;

void Reverse(char *c, int m)
{
    stack<char> S;
    for(int i=0; i<m; i++)
    {
        S.push(c[i]);

    }
    for (int i=0; i<m; i++)
    {
        c[i]=S. top();
        S. pop();
    }
}



int main()
{

    char C[100];
    cout<<"ENTER THE STRING: "<<endl;
    cin>>C;
    Reverse(C, strlen(C));
    cout<<"THE RESULT IS: \n" <<C;

    return 0;
}
