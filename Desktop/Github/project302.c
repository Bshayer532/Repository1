#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>

int main(void){
  time_t currentTime=0;
  struct tm *pTime=NULL;
  bool isExecuting=true;

  while (isExecuting){
    time(&currentTime);
    pTime=localtime(&currentTime);
    sleep(1);
    printf("\r%02d:%02d:%02d",pTime->tm_hour,pTime->tm_min,pTime->tm_sec);

  }
return 0;
}




