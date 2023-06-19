#include <cs50.h>
#include <stdio.h>
#include <math.h>

long get_num(void);
int check_digits(long n);
int checksum(long num);

int main(void)
{
    // get credit card #
    long num = get_num();
    // validate creadit card #
    int digits = check_digits(num);
    if (digits != 13 && digits != 15 && digits != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    // Luhn’s Algorithm (last digit 0)
    int last_digit = checksum(num);
    if (last_digit != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    // check card type
    int leading_num;
    if (digits == 15)
    {
        leading_num = num / pow(10, 13);
        if (leading_num == 34 || leading_num == 37)
        {
            printf("AMEX\n");
            return 0;
        }
    }
    if (digits == 13)
    {
        leading_num = num / pow(10, 12);
        if (leading_num == 4)
        {
            printf("VISA\n");
            return 0;
        }
    }
    if (digits == 16)
    {
        leading_num = num / pow(10, 14);
        if (leading_num == 51 || leading_num == 52 || leading_num == 53 || leading_num == 54 || leading_num ==55)
        {
            printf("MASTERCARD\n");
            return 0;
        }
        else if (leading_num / 10 == 4)
        {
            printf("VISA\n");
            return 0;
        }
    }
    printf("INVALID\n");
    return 0;
    // return AMEX, VISA, MASTER or INVALID
    // AMEX: 15 digits, 34,37
    // Master: 16 digits, 51,52,53,54,55
    // Visa: 13, 16 digits, 4
}

long get_num(void)
{
    long num;
    do
    {
        num = get_long("Number: ");
    }
    while (num < 0);
    return num;
}

int check_digits(long n)
{
    int digits = 0;
    long num = n;
    do
    {
        num = num / 10;
        digits++;
    }
    while (num > 0);
    return digits;
}

int checksum(long num)
{
    // store num to another var
    long n = num;
    int remainder_odd;
    int remainder_even;
    int remainder_even1;
    int remainder_even2;
    int oddSum = 0;
    int evenSum = 0;
    do
    {
        // mod 10 and store remainder in oddSum
        remainder_odd = n % 10;
        oddSum += remainder_odd;
        n = n / 10;
        // mod 10 again and store remainder * 2 in evenSum
        remainder_even = n % 10;
        remainder_even = remainder_even * 2;
        remainder_even1 = remainder_even % 10;
        remainder_even2 = remainder_even / 10;
        evenSum = evenSum + remainder_even1 + remainder_even2;
        n = n / 10;;

    }
    while (n > 0);

    int totalSum = oddSum + evenSum;
    int last_digit = totalSum % 10;
    return last_digit;
}