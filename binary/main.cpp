#include<iostream>
using namespace std;
int main()
{
    int num, first, last, middle;
    int arr[7]= {207, 300 , 900, 901, 905, 910, 999};
         cout<<"\nENTER THE NUMBER " ;
        cin>>arr[7];
    first = 0;
    last = 6;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\nThe number "<<num<<" Item found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number "<<num<<" Item not found !";
    cout<<endl;
    return 0;
}
