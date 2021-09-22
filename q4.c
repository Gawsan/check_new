
int main(void) {
  float marks[5],avg,total;
  int i=0;

  while(marks[i]!=-1){
      printf("Input the marks- %d : ",i+1);
      scanf("%f",&marks[i]);
        if(marks[i]>=0&&marks[i]<=100){
          total+=marks[i];
          i++;
        }
        else if(marks[i]!=-1)  {
              printf("Invalid marks \n ");
             continue;
            }        
  }
  avg=total/i;
  //fghfhgfjhfjh
  printf("%.2f",avg);
}