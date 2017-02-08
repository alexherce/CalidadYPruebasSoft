//
//  main.cpp
//  bufferOverflow
//
//  Created by Alejandro Herce on 2/7/17.
//  Copyright © 2017 Alejandro Herce. All rights reserved.
//

#include <iostream>
#include <cstring>

int main(int argc, const char * argv[]) {
    
    char array1[9];
    char array2[9];
    int value = 10;
    
    strcpy(array1, "arrayOne");
    strcpy(array2, "arrayTwo");
    
    printf("array 1 is at %p with value %s \n", array1, array1);
    printf("array 2 is at %p with value %s \n", array2, array2);
    printf("value is at %p with value %i \n", &value, value);
    
    strcpy(array2, argv[1]);
    
    printf("array 1 is at %p with value %s \n", array1, array1);
    printf("array 2 is at %p with value %s \n", array2, array2);
    
    return 0;
}
