//
//  main.cpp
//  bufferOverflow2
//
//  Created by Alejandro Herce on 2/7/17.
//  Copyright © 2017 Alejandro Herce. All rights reserved.
//

#include <iostream>

int fun(const char * pass) {
    int res = 0;
    char p[10];
    strcpy(p, pass);
    if(strcmp(p,"123456789") == 0)
        res = 1;
    
    return res;
}

int main(int argc, const char * argv[]) {
    
    if(fun(argv[1]))
    {
        printf("granted \n");
    } else {
        printf("go away \n");
    }
    
    
    return 0;
}
