#include <stdio.h>
void main (){
   int num[20];
   int i, j, a;
   printf("Enter the elements");
   for (i = 0; i < 4; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < 4; ++i){
      for (j = i + 1; j < 4; ++j){
         if (num[i] < num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in descending order is:");
   for (i = 0; i < 4; ++i){
      printf("%d  ", num[i]);
      if(i<3)
      {
      	printf("> ");
	  }
   }
}
