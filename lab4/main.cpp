
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool checkSentence(char str[])
{

    int len = strlen(str);
    if (str[0] < 'A' || str[0] > 'Z')
        return false;
    if (str[len - 1] != '.')
        return false;

    int prev_state = 0, curr_state = 0;

    int index = 1;


    while (str[index])
    {

        if (str[index] >= 'A' && str[index] <= 'Z')
            curr_state = 0;

        else if (str[index] == ' ')
            curr_state = 1;
        else if (str[index] >= 'a' && str[index] <= 'z')
            curr_state = 2;
        else if (str[index] == '.')
            curr_state = 3;

        if (prev_state == curr_state && curr_state != 2)
            return false;

        if (prev_state == 2 && curr_state == 0)
            return false;

        if (curr_state == 3 && prev_state != 1)
            return (str[index + 1] == '\0');

        index++;
        prev_state = curr_state;
    }
    return false;
}

int main()
{
    char *str[] = { "this is Aiub.",
                    "The sky is CLOUDY."
                    "It is my book."};
    int str_size = sizeof(str) / sizeof(str[0]);
    int i = 0;
    for (i = 0; i < str_size; i++)
     checkSentence(str[i]);




      cout<<("\"%s\" is correct \n", str[i]);
                            cout<<("\"%s\" is incorrect \n", str[i]);

    return 0;
}
