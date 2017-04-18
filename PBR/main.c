//
//  main.c
//  PBR
//
//  Created by Katherine Owens on 4/18/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    fractionPart = modf(pi, &integerPart);
    
    printf("integerPart = %.f, fractionPart = %.2f\n", integerPart, fractionPart);
    return 0;
}
