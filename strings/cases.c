#include <stdio.h>

// chaning case of a letter 

// ascii -> for caps starts from 65 : 90
// ascii -> for small start from 97 : 133

// 97 - 65 -> 32
// lower case to upper case will be -> -32
// upper case to lower case will be -> +32



int main(void){

    char pharse[] = {'a', 'n', 'i', 'm', 'a', 'l'};

    int i;

    for(i=0; pharse[i]!= '\0'; i++){
        pharse[i] = pharse[i] - 32;
    }


    printf("%s \n", pharse);

    return 0;
}