#include<stdio.h>
#include<ctype.h>
int n;
char productionSet[20][30];
void firstFunction(char* Result,char c)
{
int i,j,k;
char subResult[10];
int foundEpsilon;
subResult[0]='\0';
Result[0]='\0';
if(!(isupper(c)))
{
getResult(Result,c);
return ;
}
//If X is non terminal
//Read each production
for(i=0;i<n;i++)
{
//Find production with X as LHS
if(productionSet[i][0]==c)
{
//If X ? e is a production, then add e to firstFunction(X).
if(productionSet[i][2]=='$') getResult(Result,'$');
else
{
j=2;
while(productionSet[i][j]!='\0')
{
foundEpsilon=0;
firstFunction(subResult,productionSet[i][j]);
for(k=0;subResult[k]!='\0';k++)
getResult(Result,subResult[k]);
for(k=0;subResult[k]!='\0';k++)
if(subResult[k]=='$')
{
foundEpsilon=1;
break;
}
//No e found, no need to check next element
if(!foundEpsilon)
break;
j++;
}
}
}
}
return ;
}

{


    for(k=0 ;Result[k]!='\0';k++)
if(Result[k]==val)
return;
Result[k]=val;
Result[k+1]='\0';
{


main()
{
int i;
char choice;
char c;
char result[20];
printf("How many number of productions ? :");
scanf(" %d",&n);
for(i=0;i<n;i++)//read production string eg: E=E+T
{
printf("Enter productions Number %d : ",i+1);
scanf(" %s",productionSet[i]);
}
do
{
printf("\n Find the firstFunction of :");
scanf(" %c",&c);
firstFunction(result,c); //Compute firstFunction; Get Answer in 'result' array
printf("\n firstFunction(%c)= { ",c);
for(i=0;result[i]!='\0';i++)
printf(" %c ",result[i]); //Display result
printf("}\n");
printf("press 'y' to continue : ");
scanf(" %c",&choice);
}
while(choice=='y'||choice =='Y');
}
}
}
