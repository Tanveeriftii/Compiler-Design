#include <stdio.h>
int no_of_vowels(char file[256])
{
    FILE* fp;
    char c;
    int count = 0;
    fp = fopen("task.txt", "r");

    if (fp == NULL)
    {
        printf("UNABLE TO OPEN THE FILE");
        return -1;
    }
    while ((c = fgetc(fp)) != EOF)
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++count;
        }
    }
return count;
}
void print_file(char file[256])
{

    FILE* fp;
    char c;
    fp = fopen(file, "r");

    if (fp == NULL) {
        printf("UNABLE TO OPEN THE FILE");
        return;
    }

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

}
int main()
{
    char file[256];
    printf("Enter file name: ");
    gets(file);
    printf("\n***CONTENT OF THE INPUT FILE***\n");
    print_file(file);
    printf("\n");
    printf("Number of Vowels = %d", no_of_vowels(file));
}
