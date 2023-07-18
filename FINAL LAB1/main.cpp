#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include <stdio.h>
#include <string.h>

using namespace std;
int Check1(char check[])
{
    int str_length = strlen(check);
    if(str_length==0)
    {
        return 1;
    }

    if(check[0] != 'a')
    {
        return 2;
    }
    if(check[1] != 'b')
    {
        return 2;
    }

    for(int i=2; i<str_length ; i++)
    {
        if(check[i] != 'c')
    {
        return 2;
    }

    }
    return 1;
}

int Check2(char check[])
{
    int str_length = strlen(check);
    if(check[0] != 'a')
    {
        return 2;
    }
    if(check[1] != 'b')
    {
        return 2;
    }

    for(int i=2; i<str_length ; i++)
    {
        if(check[i] != 'c')
    {
        return 2;
    }

    }
    return 1;
}

int Check3(char check[])
{
    int str_length = strlen(check);
    for(int i=0; i<str_length ; i++)
    {
        if(check[i] >= 'a' && check[i] <= 'z')
    {
        return 1;
    }
    return 2;

}
}

int main() {
    char m[100];
    int n;
    cout << "Choose an reg expression no: \n 1. abc* \n 2. abc+ \n 3. [a-z] \n  ";
    cin >> n;
    cout <<" Enter a String: ";
    string str;
    cin>>str;
    gets(m);


    switch (n) {
        case 1:
            {


            int r1=Check1(m);
            if(r1==1){cout << "Matched";}
            else{cout << "Not Matched";}

            break;
            }
        case 2:
            {

            int r2=Check2(m);
            if(r2==1){cout << "Matched";}
            else{cout << "Not Matched";}
            break;
            }
        case 3:
            {
            int r3 =Check3(m);
            if(r3==1){cout << "Matched";}
            else{cout << "Not Matched";}
            break;
            }

        default:
            cout << "incorrect value.";
            break;
    }

    return 0;
}
