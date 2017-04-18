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
    
    unsigned int feet = (unsigned int)floor(rawFeet);
    
    if (ftptr) {
    printf("Storing %u to the address %p\n", feet, ftptr);
    *ftptr = feet;
    }
    
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;
    
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
    
    return 0;
}
