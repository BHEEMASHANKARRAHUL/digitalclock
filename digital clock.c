// Import the required libaries
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
   int hour;
   int minute ;
   int second ;
   printf("enter time");
   scanf("%d%d%d",&hour,&minute,&second);
   while(1) {
       // for regular change of time without displaying previous one
       // for windows use system("cls")
       system("clear"); 
       
       
       printf("%02d : %02d : %02d ",hour,minute,second);
       
       // Clear the output buffer in gcc
       fflush(stdout);
       
       // Increment second
       second++;

       // Update hour, minute and second
       if(second == 60) {
           minute += 1;
           second = 0;
       }
    
       if(minute == 60) {
           hour += 1;
           minute = 0;
       }
    
       if(hour == 24) {
           hour = 0;
           minute = 0;
           second = 0;
       }

       // Wait for 1 second
       sleep(1);  
   }
   return 0;
}
