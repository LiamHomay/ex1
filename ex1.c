/******************
Name: Liam Homay
ID: 333087807
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num1, pos1;
    printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);
  int bit1 = (num1 >> pos1) & 1;
  printf("The bit in position %d of number %d is: %d\n", pos1, num1, bit1);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int num2, pos2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &pos2);
  int on = num2 | (1 << pos2);
  int off = num2 & ~(1 << pos2);
  printf("Number with bit %d set to 1: %d\n", pos2, on);
  printf("Number with bit %d set to 0: %d\n", pos2, off);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num3, pos3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &pos3);
  int tog = num3 ^ (1 << pos3);
  printf("Number with bit %d toggled: %d\n", pos3, tog);

  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4);
  int even = (num4 & 1) ^ 1;
  printf("%d\n", even);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int first, second;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &first);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &second);
  int sum = first + second;
  printf("The sum in hexadecimal: %X\n", sum);
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);


  printf("Bye!\n");
  
  return 0;
}
