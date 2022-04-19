//Function to calculate cube and square of a number
#include<stdio.h>
float cube(float num);
float square(float sqre);
int main()
{
    float input, output1, output2;
    printf("Enter a number:");
    scanf("%f",&input);
    
    output1 = cube(input);
    output2 = square(input);
printf("\n The cube of %.2f is %.2f ",input,output1);
printf("\n The square of %.2f is %.2f ",input,output2);

return 0;
}

float cube(float num)
{
    float num_cubed;
    num_cubed = num * num * num;
    return num_cubed;
}

float square(float num)
{
    float num_squared;
    num_squared = num * num;
    return num_squared;
}