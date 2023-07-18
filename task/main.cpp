#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int isKeyword(char buffer[]){
char keywords[32][10] = {"default","case","do","double","else","float","for","goto",
"if","int","long","return","short",
"sizeof","unsigned","void",};
int i, p = 0;
for(i = 0; i < 32; ++i){
if(strcmp(keywords[i], buffer) == 0){
p = 1;
break;
}
}
return p;
}

int main(){
char ch, buffer[15], operators[] = "+-*/%=";
ifstream fin("program.txt");
int i,j=0;
if(!fin.is_open()){
cout<<"error while opening the file\n";
exit(0);
}
return 0;
}

