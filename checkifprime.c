#include <stdio.h>
#include <stdbool.h>

void checkIfPrime(int x){

    bool isPrime;
    int i;

    for (i = 2; i < x; i++){
        if (x % i == 0){
            isPrime = false;
            break;
        }
        else {
            isPrime = true;
        }
    }

    if (x == 1){
        printf("1 is neither prime nor composite");
    }
    else if (isPrime){
        printf("%d is prime.", x);
    }
    else{
        printf("%d is not prime", x);
    }

}

int main(){

    signed int x;
    printf("Enter an integer to see if it's prime, composite, or neither!\n");

    scanf("%i", &x);
    checkIfPrime(x);

    return 0;
}

