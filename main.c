#include <stdio.h>

int​ main​(​void) {
  int distance = 100;
  float power = 2.345;
  double supper_power = 51.87;
  char initial = 'V';
  char first_name [] = "Lam";
  char last_name [] = "Tran";
 ​
  printf("enter your first name: %s \n", first_name);
  printf("enter your initial: %c \n", initial);
  printf("enter your last name: %s \n", last_name);
  printf("enter your whole name: %s %c %s \n", first_name, initial, last_name);

  printf("you are %d miles", distance);

  return 0;
}