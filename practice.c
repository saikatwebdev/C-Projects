#include<stdio.h>

int calculateSum(int x , int y){
    return x + y;
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d",calculateSum(x,y));
    return 0;
}