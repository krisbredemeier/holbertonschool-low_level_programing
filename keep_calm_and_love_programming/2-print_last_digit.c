/*this prints the last digit*/

#include <unistd.h>
int print_char(char c)
{
return (write(1, &c, 1));
}
void print_last_digit(int n)
{
int length;
int expo=1;
int number=n;
if (n<0) {
number = number*-1;
n= n*-1;
}
for(length=0; number > 0; length++) {
number=number/10;
}
while(length>1) {
expo=expo*10;
length--;
}
n=n%expo;
print_char(n+'0');
}
