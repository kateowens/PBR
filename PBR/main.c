//
//  main.c
//  PBR
//
//  Created by Katherine Owens on 4/18/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters, unsigned int *ftptr, double *inptr) {
    double rawFeet = meters * 3.281;
    double intFeet;
    double fractionalFoot = modf(rawFeet, &intFeet);
    double inches = fractionalFoot * 12.0;
    
    printf("%.1f meters is equal to %.1f feet and %.2f inches.\n", meters, intFeet, inches);
    
    if (ftptr) {
    printf("Storing %u to the address %p\n", intFeet, ftptr);
    *ftptr = intFeet;
    }
    
    
    if (inptr) {
    printf("Storing %.2f to the address %p\n", inches, inptr);
    *inptr = inches;
    }
}

int main(int argc, const char * argv[]) {
    double meters = 3.0;
    unsigned int feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches.", meters, feet, inches);
    
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    fractionPart = modf(pi, &integerPart);
    
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    return 0;
}
