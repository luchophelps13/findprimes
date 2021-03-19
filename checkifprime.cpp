#include <iostream>

using namespace std;

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
        cout << "1 is neither prime nor composite.";
    }
    else if (isPrime){
        cout << x << " is prime.";
    }
    else{
        cout << x << " is not prime.";
    }

}

int main(){

    signed int x;
    cout << "Enter an integer to see if it's prime, composite, or neither!\n";
    cin >> x;

    checkIfPrime(x);

    return 0;
}

