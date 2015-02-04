//
//  Permute.cpp
//  test
//
//  Created by Szt on 5/29/14.
//  Copyright (c) 2014 Szt. All rights reserved.
//

#include "Permute.h"
#include <iostream>
Permute::Permute(std::string st){
    str=st;
};
void Permute::permute(int start){
/*
 abcd   bacd
 abdc   badc
 acbd   bcad
 acdb   bc
 adbc
 adcb
 */
   // std::stringstream sts；
    char temp[str.length()];
    if(start==str.length()){
        std::cout<<temp<<"\n";return;
    }
    else if(start>str.length()){
        return;
    }
    else{//start <obj.length;
        for(int i=0;i<str.length();i++){
            if(used[i]==true){}
            else{
                //std::cout<<str.at(i);
                temp[start]=str.at(i);
                used[i]=true;
                permute(start+1);
                used[i]=false;
            }
        }
    }
};