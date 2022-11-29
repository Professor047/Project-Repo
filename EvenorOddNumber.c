#include<stdio.h> 

int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d", &n);
    printf("The Number is %d\n", n);
    //This will check if the number is odd or even
    if(n%2==0){   //This will check if the number is odd or even
        printf("%d is a Even Number\n");
    }
    else{
        printf("%d is a Odd Number\n");
    }

    return 0;
}
