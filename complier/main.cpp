#include <iostream>
#include <string.h>
#include<fstream>
using namespace std;

int main () {

int i;

int flag=0;

char keyword[32][10]={

"auto","double","int","struct","break","else","long",

"switch","case","enum","register","typedef","char",

"extern","return","union","const","float","short",

"unsigned","continue","for","signed","void","default",

"goto","sizeof","voltile","do","if","static","while"

};

char str_key[20];

cout << "Provide you keyword string ";

gets(str_key);

ofstream file;
file.open("key.txt");

for (i=0; i<32; i++) {

if (strcmp(str_key,keyword[i])==0){

flag = 1;

}

}

if (flag==1){

cout << "Given string "<< str_key << " is a keyword" << endl;

file << str_key << endl;

}

else {

cout << "Given string " << str_key << " is not a valid keyword" << endl;

}
file.close();

return 0;

}
