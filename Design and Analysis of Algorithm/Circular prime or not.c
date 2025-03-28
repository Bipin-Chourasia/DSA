#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int count_digits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int rotate_number(int n, int num_digits) {
    int last_digit = n % 10;  
    n /= 10;                  
    return last_digit * pow(10, num_digits - 1) + n;
}

int is_circular_prime(int n) {
    int num_digits = count_digits(n);
    int rotated = n;

    for (int i = 0; i < num_digits; i++) {
        if (!is_prime(rotated))
            return 0;
        rotated = rotate_number(rotated, num_digits);
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_circular_prime(num)) {
        printf("%d is a circular prime\n", num);
    } else {
        printf("%d is not a circular prime\n", num);
    }

    return 0;
}

