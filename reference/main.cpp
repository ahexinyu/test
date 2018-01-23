//
//  main.cpp
//  reference
//
//  Created by 何欣雨 on 2017/12/4.
//  Copyright © 2017年 tony. All rights reserved.
//

#include <iostream>
//#include
#include "Header.h"
using namespace std;
extern long  get_file_size(FILE *file);
int main(int argc, const char * argv[]) {
    FILE *ISfile;
     long number=0;
    
    ISfile=fopen("/Users/hexinyu/Desktop/1.txt", "r");
    if(ISfile==NULL){
        printf("shabi\n");
    }
    else{
        
        number=get_file_size(ISfile);
    }
    fclose(ISfile);
    
    printf("%ld\n",number);
    return 0;
}
