#include<iostream>
#include<stack>
#include <cstring>
using namespace std;

void balanced (char *A, int n)
{
    stack<char> s;
    for (int i = 0 ; i<n; i++)
        {
           if( A[i] == '(' || A[i] =='{' || A[i] =='[')
s.push(A[i]);
else if (A[i] == ')' || A[i] =='}' || A[i] ==']'){
if (s.empty()) {cout<<"not balanced"<<endl; return;}
else if (s.top()=='(' && A[i] == ')') s.pop();
else if(s.top()=='[' && A[i] == ']') s.pop();
else if (s.top()=='{' && A[i] == '}') s.pop();
else{cout<<"not balanced"<<endl;
return;
 }
 }
}

if (s.empty()) cout<<"balanced"<<endl;
else cout<<"not balaned"<<endl;

	}
int main() {
char arr[20];
cout<<"please enter the expression you want to check"<<endl;
cin.getline (arr,20);
int r = strlen(arr);
balanced(arr,r);
return 0; }
