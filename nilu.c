#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>

int main(
{

int a;


time_t rawtime; 

struct tm *timeinfo;


printf("Hello, Gleb \n"); 

scanf("%d",&a); 

printf("\n a = %d",a);


time(&rawtime); 

 tm *timeinfo =localtime(&rawtime);
 

 printf(" %2d:%2d:%2d \n",timeinfo->tm_hour-8,timeinfo->tm_min,timeinfo->tm_sec); 

return 0; 

}
