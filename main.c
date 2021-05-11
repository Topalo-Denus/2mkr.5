#include<stdio.h>
void white () {
printf("\033[0;37m");
}
void givearray(int arr[10]) { // Entered your array
for (int i=0; i<10; i++) {
printf("a[%d] = ", i);
scanf("%d", &arr[i]);
}
printf("\n\t\tResult: ");
printf("\nYour array: ");
}
void aroundarry(int arr[10]) { // Show your array in relult
printf("{");
for (int i=0; i<10; i++) {
if (i == 9) {
printf("%d", arr[i]);
white();
}
else {
printf("%d, ", arr[i]);
white();
}
}
printf("}");
}
// Function to calculate sum
void Sumofeven(int arr[], int n)
{
int even = 0;
int odd = 0;
for (int i = 0; i < n; i++) {
// Loop to find even, odd sum
if (i % 2 == 0)
even += arr[i];
else
odd += arr[i];
}
printf( "\nEven index positions sum: \033[0;32m%d", even);
white();
}

// Driver function
int main()
{
int arr[10];
int n = sizeof(arr) / sizeof(arr[0]);
int v;
printf("\nChoose a method to get the result: ");
printf("\n\t1: Start;\n\t2: Exit.");
printf("\n\tAnswer: ");
scanf("%d", &v);
if ( v==1 ) {
givearray(arr);
aroundarry(arr);
Sumofeven(arr, n);
}
return 0;
}