#include<stdio.h>

int main(){
    int c;
    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
    return 0;
}


/*
getchar reads teh next input character form a text stream andreturns that as its value

putchar -- prints a character each time it is called;
*/