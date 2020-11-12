#include <stdio.h>    
int main()
{ 
    printf("%d",120); // Output: 120
    printf("\n"); // Output:
    
    printf("%f",3.5); // Output: 3.500000
    printf("\n"); // Output:
    
    printf("%s","hello"); // Output: hello
    printf("\n"); // Output:
    
    printf("%s","hello"); // Output: hello
    printf("\n"); // Output:        
    printf("%s","world"); // Output: world
    printf("\n"); // Output:
    
    printf("%s is %d years old. His CGPA is %f","hasan",20,4.56);
    printf("\n"); // Output:
    
    printf("%s is %d years old. His CGPA is %0.2f","hasan",20,4.56);
    printf("\n"); // Output:
    
    char name[] = "hasan";
    int age = 20 ;
    float cgpa = 4.56 ;

    printf("%s is %d years old. His CGPA is %0.2f", name,age,cgpa);
    return 0;
}
