#include <stdio.h>
int main() {
     int calls;
     double bill = 0.0;
     printf("Enter number of calls: ");
     scanf("%d", &calls);
     if (calls > 150) {
          int slab_calls;
          slab_calls = (calls > 250) ? 100 : (calls - 150);
          bill += slab_calls * 0.9;
          if (calls > 250) {
                slab_calls = (calls > 400) ? 150 : (calls - 250);
                bill += slab_calls * 1.2;
          }
          if (calls > 400) {
                slab_calls = calls - 400;
                bill += slab_calls * 1.5;
          }
     }
     printf("Total bill: Rs. %.2f\n", bill);
     return 0;
}
