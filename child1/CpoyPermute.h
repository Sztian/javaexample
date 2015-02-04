//
//  Permute.h
//  test
//
//  Created by Szt on 5/29/14.
//  Copyright (c) 2014 Szt. All rights reserved.
//

#ifndef __test__Permute__
#define __test__Permute__

#include <iostream>
class Permute{
    public:
    Permute(std::string);
    void permute(int);
    private:
    std::string str;
    int used[];
};

#endif /* defined(__test__Permute__) */
