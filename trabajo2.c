#include <stdio.h>
int main(void){
int return_value;
return_value=fork();
for(int x=5;x<=19;x++)
{
if(x<=9)
{
if(return_value==0)
printf("hijo %d\n", x);
}
else
printf("padre %d\n", x);
}
}
