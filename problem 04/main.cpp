#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3], mat4[3][3];
    cout<<"Enter Elements of First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat1[i][j];
    }
    cout<<"Enter Elements of Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat2[i][j];
    }
    cout<<"Enter Elements of Third Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat3[i][j];
    }
    cout<<"\nAdding the Three Given Matrix......\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat3[i][j] = mat1[i][j]+mat2[i][j]+mat3[i][j];
    }
    cout<<"Addition Result of Three Given Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat3[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
