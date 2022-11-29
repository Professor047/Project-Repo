#include<stdio.h> 

int main()
{
    int n;
    printf("Enter a Number\n");
    scanf("%d", &n);
    printf("The Number is %d\n", n);

    if(n%2==0){
        printf("%d is a Even Number\n");
    }
    else{
        printf("%d is a Odd Number\n");
    }

    return 0;
}
