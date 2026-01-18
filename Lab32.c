#include <stdio.h>
int main() {
     double units;
     printf("Enter consumed units: ");
     scanf("%lf", &units);
     if (units < 0) {
          printf("Invalid units\n");
          return 0;
     }
     int category;
     if (units <= 100) category = 0;
     else if (units <= 200) category = 1;
     else if (units <= 400) category = 2;
     else category = 3;
     double bill = 0.0;
     switch (category) {
          case 0:
                bill = 0.0;
                break;
          case 1:
                bill = (units - 100.0) * 1.5;
                break;
          case 2:
                bill = 100.0 * 1.5 + (units - 200.0) * 2.5;
                break;
          case 3:
                bill = 100.0 * 1.5 + 200.0 * 2.5 + (units - 400.0) * 3.5;
                break;
     }
     printf("Total electricity bill: Rs %.2f\n", bill);
     return 0;
}