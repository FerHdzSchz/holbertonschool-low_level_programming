#include <stdio.h>

int print_last_digit(int n)
{
int leng;
leng = n % 10;
return(leng);
}

int main(int num)
{
printf("%d",print_last_digit(-159));
printf("%d",print_last_digit(159));
printf("%d",print_last_digit(0));
printf("%d",print_last_digit(1594873));
return (0);
}
