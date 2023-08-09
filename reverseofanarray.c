#include <stdio.h>
#include<conio.h>
int main() {
    int num, r = 0, a;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
     while (num != 0) {
        a = num % 10;
        r= r* 10 + a;
        num /= 10;
    }printf("Reversed number: %d\n", r);
    getch();
    return 0;
}
