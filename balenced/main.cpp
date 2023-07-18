#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool parentheses(char opening,char closing)
{
	if(opening == '(' && closing == ')')
	return true;
	else if(opening == '{' && closing == '}')
	return true;
	else if(opening == '[' && closing == ']')
	return true;
	return false;
}
bool Balanced(string n)
{
	stack<char>  S;
	for(int i =0;i<n.length();i++)
	{
		if(n[i] == '(' || n[i] == '{' || n[i] == '[')
			S.push(n[i]);
		else if(n[i] == ')' || n[i] == '}' || n[i] == ']')
		{
			if(S.empty() || !parentheses(S.top(),n[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main()
{

	string expression;
	cout<<"Enter an expression:  ";
	cin>>expression;
	if(Balanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";
}

