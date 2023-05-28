#include <stdio.h>
#include <cs50.h>
#include <string.h>


// int main(void){

//     int numbers[] = {20, 500, 10, 5, 100, 1, 50};
//     int n = get_int("Number: ");

//     for(int i = 0; i<7; i++){

//         if (numbers[i] == n)
//         {   
//             printf("Found\n");
//             return 0;
//         }
//     };
//     printf("Not found\n");
//     return 1;
// };

int main(void){

    string strings[] = {"red", "yellow", "green", "blue"};
    string s = get_string("Your word: ");

    for(int i = 0; i<7; i++){

        if ( strcmp(strings[i], s) == 0)
        {   
            printf("Found\n");
            return 0;
        }
    };
    printf("Not found\n");
    return 1;
};