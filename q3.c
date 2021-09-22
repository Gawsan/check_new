#include <stdio.h>
#define size 5
int main(void) {
  float marks[5],avg,total;
  

  for(int i=0;i<size;){

      printf("Input the marks- %d : ",i+1);
      scanf("%f",&marks[i]);

        if(marks[i]>=0&&marks[i]<=100){
          total+=marks[i];
          i++;
    
        }
        else {
              printf("Invalid marks \n ");
              continue;
            }
  }
  avg=total/size;
  printf("%.2f",avg);
}