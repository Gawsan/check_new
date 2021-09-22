#include <stdio.h>

int main(void) {
  char grade;

  printf("Input the Grade : ");
  scanf("%c",&grade);

  switch(grade){
    case 'A':
    printf("Excellent");
    break;

    case 'B':
    printf("Good");
    break;

    case 'C':
    printf("Average");
    break;

    case 'F':
    printf("Bad");
    break;

    default :
    printf("Entered wrong grade ");
  }

  }