//
//  similarity.cpp
//  reference
//
//  Created by 何欣雨 on 2017/12/4.
//  Copyright © 2017年 tony. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
using namespace std;
long get_file_size(FILE *file){
    long currentposition,length;
    currentposition=ftell(file);
    fseek(file,0L, SEEK_END);
    length=ftell(file);
    fseek(file,currentposition,SEEK_SET);
    return length;
}
long filesize(const char *path){
    long  lengthsize=-1;
    struct stat buff;
    if( stat(path,&buff)<0){
        return lengthsize;
    }
    else{
        lengthsize=buff.st_size;}
    return lengthsize;
}
static void read_file(char *file_name)
{
    char ch; int *p;
    int number;
    char squence[200];
    FILE *file=fopen(file_name,"r");
    for(ch=getc(file);ch!=EOF;){
        if(ch=='>'){
            //p=malloc();
            //number=fscanf(file,"%[^\n]s",squence);
            //assert(number);
            
        }
        else{
            ch=toupper(ch);//转换大小写
            
            
        }
    }
    //return 0;
}
