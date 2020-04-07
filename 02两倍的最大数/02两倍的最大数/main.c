//
//  main.c
//  02两倍的最大数
//
//  Created by bk.xiong on 2020/4/7.
//  Copyright © 2020 xiongbk. All rights reserved.
//

//在一个给定的数组nums中，总是存在一个最大元素 。
//查找数组中的最大元素是否至少是数组中每个其他数字的两倍。
//如果是，则返回最大元素的索引，否则返回-1。


#include <stdio.h>


int resultIndex(int *nums,int size){
    
    int max = nums[0];
    int index = 0;
    
    // 求数组中最大数和索引
    for (int i=0; i<size; i++) {
        
        if (max < nums[i]) {
            
            index = i;
            max = nums[i];
        
        }
        
    }
    
    
    for (int i = 0; i<size; i++) {

        if (nums[i] == max) {

            continue;
        }

        if (nums[i] * 2 > max) {

            return -1;
        }
    }
    
    return index;
}

int main(int argc, const char * argv[]) {

    int nums[] = {100,6,20,200,1,0};
    int result = resultIndex(nums, 4);
    printf("%d\n",result);
    
    return 0;
}
