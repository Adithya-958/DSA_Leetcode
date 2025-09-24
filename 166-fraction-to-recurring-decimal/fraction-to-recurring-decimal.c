#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fractionToDecimal(long long numerator, long long denominator) {
    if (denominator == 0) return "Division by zero";
    if (numerator == 0) return "0";
    
    char* result = malloc(10000);
    int index = 0;
    
    // Handle sign
    if ((numerator < 0) ^ (denominator < 0)) {
        result[index++] = '-';
    }
    
    long long num = llabs(numerator);
    long long den = llabs(denominator);
    
    // Integer part
    long long integer = num / den;
    long long rem = num % den;
    
    sprintf(result + index, "%lld", integer);
    index = strlen(result);
    
    if (rem == 0) return result;
    
    result[index++] = '.';
    
    // Build decimal part in a separate buffer
    char decimalPart[1000];
    int decimalIndex = 0;
    long long remainders[1000];
    int rem_count = 0;
    int repeat_start = -1;
    
    while (rem != 0 && decimalIndex < 9999) {
        // Check for repeating remainder
        for (int i = 0; i < rem_count; i++) {
            if (remainders[i] == rem) {
                repeat_start = i;
                break;
            }
        }
        
        if (repeat_start != -1) break;
        
        // Store remainder and calculate digit
        remainders[rem_count++] = rem;
        rem *= 10;
        int digit = rem / den;
        rem = rem % den;
        decimalPart[decimalIndex++] = '0' + digit;
    }
    
    if (repeat_start == -1) {
        // No repetition - just append decimal part
        for (int i = 0; i < decimalIndex; i++) {
            result[index++] = decimalPart[i];
        }
    } else {
        // Has repetition - add parentheses
        for (int i = 0; i < repeat_start; i++) {
            result[index++] = decimalPart[i];
        }
        result[index++] = '(';
        for (int i = repeat_start; i < decimalIndex; i++) {
            result[index++] = decimalPart[i];
        }
        result[index++] = ')';
    }
    
    result[index] = '\0';
    return result;
}