#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
    return 0;
}

/*
Every time the user inputs any kind of character or spaces or tabs or enter it counts ....
and when the user click CTRL + z + ENTER the operation ends with printing the number of lines spaces and the words..
*/