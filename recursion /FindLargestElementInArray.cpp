//
//  FindLargestElementInArray.cpp
//  CppClass
//
//  Created by Mohammad Hamdan on 12/28/17.
//  Copyright © 2017 Mohammad Hamdan. All rights reserved.
//
//
//
//

#include <iostream>
int largest(const int list[], int lowerIndex, int upperIndex);

int main(int argc, const char * argv[]) {
    
    int list[] = {5,10,12,8};
    
    std::cout<<largest(list, 0,3)<<std::endl;

    
    return 0;
}

int largest(const int list[], int lowerIndex, int upperIndex)
{
    int max;
    
    if(lowerIndex == upperIndex)
        return list[lowerIndex];
    else
    {
        //find the largest element in list[a+1] ... list[b] then call it max
        max = largest(list, lowerIndex+1, upperIndex);
        //compare the elements list[a] and max
        if(list[lowerIndex] >= max)
            return list[lowerIndex];
        else
            return max;
    }
    
}















