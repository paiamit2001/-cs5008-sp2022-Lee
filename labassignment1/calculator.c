//Name: Amit Pai
//Email: pai.ami@northeastern.edu
#include<stdio.h>
int main()
{
    int a,b,c, choice;
    
    printf("Enter your choice: \n");
    printf(" 1.addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);
    
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);  
    
    switch (choice) {
    
    case 1:
    c = a + b;
    printf("The value is: %d\n", c);

    break;
    
    case 2:
    c = a - b;
    printf("The value is: %d\n", c);
    
    break;

    case 3:
    c = a * b;
    printf("The value is: %d\n", c);

    break;

   case 4:
   c = a/b;
   printf("The value is: %d\n", c);

   break;


   default:
   printf("Invalid choice");
   break;
    }
    
           
    return 0;
}
