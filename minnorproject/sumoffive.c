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



// #include <stdio.h>
// int a=5;
// int factorial=1;
// int main(){
//  for(int i=1;i<=a;i++){
// factorial=i*factorial;

   
//     }
//     printf("\nThe factorial of %d is %d",a,factorial);
//  }


// #include <stdio.h>
// int arr[10];
// int largestnumber;
// int smallestnumber;
// int main(){
//     printf("Enter 10 numbers:\n");
//     for(int i=0;i<10;i++){
//         scanf("%d",&arr[i]);
//     }
//     largestnumber=arr[0];
//     smallestnumber=arr[0];
//     for(int i=1;i<10;i++){
//         if(arr[i]>largestnumber){
//             largestnumber=arr[i];
//         }
//         if(arr[i]<smallestnumber){
//             smallestnumber=arr[i];
//         }
//     }
//     printf("The largest number is %d\n",largestnumber);
//     printf("The smallest number is %d\n",smallestnumber);
//     return 0;
// }



#include <stdio.h> 
#include <stdlib.h>
int sum;
double average;
int main() {
int *arr=(int *)malloc(10*sizeof(int));
printf("Enter 10 numbers:\n");
scanf("%d",&arr[0]);
for(int i=1;i<10;i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<10;i++){
  sum = sum + arr[i];
   }
   average=(double)sum/10;
   printf("The sum of 10 numbers is %d\n",sum);
   printf("The average of 10 numbers is %.2f\n",average);
   free(arr);
}


