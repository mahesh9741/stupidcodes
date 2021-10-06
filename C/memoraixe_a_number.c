#include <stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("(Press enter to goto next step)");
    getchar();
    printf("memorize a number between 1 to 10");
    getchar();
    printf("multipy it by 9");
    getchar();
    printf("add the number you remebered to it");
    getchar();
    printf("half the number");
    getchar();
    printf("Remove the number you remembered form it");
    getchar();
    printf("Enter the number you got after all operations:");
    scanf("%d",&x);
    printf("the number you memorized is:%d",x/4);
    

    return 0;
}
