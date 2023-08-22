#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void PalindromeTwo(char* str) {
    int size = strlen(str);

    char* Pnew_str;
    Pnew_str = (char*)malloc( (size) * sizeof(char));
    //char new_str[size];
    //printf("%d\n", size);

    int index = 0;
    int flag = 0;

    for (int i = 0; i < size; i++) {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 79 && str[i] <= 122)) {
            Pnew_str[index] = str[i];
            index++;
        }
    }

    //printf("DEBUG\n");
    Pnew_str[index] = '\0';
   //printf("%d\n", index);
    
    for (int i = 0; i < index / 2 + 1; i++) {
        //printf("%c  %c\n", new_str[i], new_str[index-i-1]); 

        if (i == index - i - 1) {
            flag = 0;
            //printf("DEBUG2\n");
            break;
        }

        if ( Pnew_str[i] == Pnew_str[index - i - 1]) {
            //printf("DEBUG3\n");
            flag = 1;
        }
        else {
            flag = 0;
            //printf("DEBUG4\n");
            break;
        }
    }

    //free(Pnew_str);

    if (flag == 1) {
        printf("true");
    }
    else {
        printf("false");
    }

}
int main(void) {

    char str[] = "bolis - silob?";
    PalindromeTwo(str);
    return 0;

}