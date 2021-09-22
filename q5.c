#include <stdio.h>

int main(void) {
  float marks;
  
printf("Enter your marks : ");
scanf("%f",&marks);

if(marks>100||marks<0){
  printf("Invalid user input");
}
else if(marks<=100&&marks>=75){
   printf("Your grade is : A ");
}

else if(marks<=74&&marks>=65){
   printf("Your grade is : B ");
}
else if(marks>=45&&marks<=45){
   printf("Your grade is : c ");
}
else{
  printf("Your grade is : F ");
}

}