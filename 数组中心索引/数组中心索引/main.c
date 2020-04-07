//
//  main.c
//  数组中心索引
//
//  Created by bk.xiong on 2020/4/6.
//  Copyright © 2020 xiongbk. All rights reserved.
//

#include <stdio.h>



//给定一个整数类型的数组 nums，请编写一个能够返回数组“中心索引”的方法。
//
//我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
//
//如果数组不存在中心索引，那么我们应该返回 -1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。

int pivotIndex(int *nums,int size){
    
    int n = size;
    int left = 0;
    int right = 0;
    
    // 判断数据合法性
    if (0 == size) {
        return 0;
    }
    // 从第1个元素开始相加的和
    for (int i=1; i<n; i++) {
        
        right = right + nums[i];
    }
    
    if (left == right) {
        return 0;
    }
    
    // 从第0个元素开始相比较
    for (int i=1; i<n; i++) {
        
        left = left + nums[i-1];
        right = right - nums[i];
        
        if (left == right) {
            return i;
        }
    }
    
    return -1;
}


int main(int argc, const char * argv[]) {

    int nums[6] = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums, 6);
    printf("%d\n", result);
    
    return 0;
}
