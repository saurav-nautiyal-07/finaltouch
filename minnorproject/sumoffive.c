// #include<stdio.h>
// int sum=0;
// int main(){
//  int arr[5];
//  printf("Enter 5 numbers:\n");
//  for(int i=0;i<5;i++){
//     scanf("%d",&arr[i]);
//  }
//  for (int i=0;i<5;i++){
//     sum=sum+arr[i];
   
  
//  }
//  printf("The sum of 5 numbers is %d",sum);
//  return 0;
// }


// #include <stdio.h>

// int main() {
//     int num, reversedNumber = 0, remainder;

//     // Prompt the user to enter an integer
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // Loop until the original number becomes 0
//     while (num != 0) {
//         // Extract the last digit of the number
//         remainder = num % 10;

//         // Build the reversed number
//         reversedNumber = reversedNumber * 10 + remainder;

//         // Remove the last digit from the original number
//         num /= 10;
//     }

//     // Print the reversed number
//     printf("Reversed Number = %d\n", reversedNumber);

//     return 0;
// }



#include <stdio.h>
int a=5;
int factorial=1;
int main(){
 for(int i=1;i<=a;i++){
factorial=i*factorial;

   
    }
    printf("\nThe factorial of %d is %d",a,factorial);
 }


