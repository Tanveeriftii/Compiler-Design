
#include <stdio.h>


int main() {
   int array[10] = {1,6,3,8,9,10,2,4,11,15};
   int sum, loop;
   float avg;

   sum = avg = 0;

   for(loop = 0; loop < 10; loop++) {
      sum = sum + array[loop];
   }

   avg = (float)sum / loop;
   printf("Average of array values is %.2f", avg);

   return 0;
}
