#include<stdio.h> 
long long factorial (int n)
{ 
    if(n<=1) 
        return 1; 
    else 
        return n*factorial (n-1); 
} 

int main() { 
    int num; 
    printf(" Enter a positive number: "); 
    scanf("%d",&num);
    printf("factorial=%lld", factorial(num)); 
    return 0; 
}
