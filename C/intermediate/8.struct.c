#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;
} person;


int main(){

    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495";

    people[1].name = "David";
    people[1].number = "+1-700-500";

    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        };

    }
    printf("Not found !!! :( \n");

};