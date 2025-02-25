#include <stdio.h>
#include <stdbool.h>

typedef struct {
    short temp;
    short volt;
} tvtable;

int findStructIndex(tvtable arr[], int n, short target_volt, bool is_low) {
    if (n == 0) return -1; // 处理空数组情况
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid].volt == target_volt) {
            return mid;
        } else if (arr[mid].volt > target_volt) {
            right = mid - 1;  // 递增数组中，较小的值在左侧
        } else {
            left = mid + 1;   // 递增数组中，较大的值在右侧
        }
    }

    // 处理插入位置
    if (left == 0) {
        return 0; 
    } else if (left == n) {
        return n;
    } else {
        return is_low ? (left - 1) : left;
    }
}

int main() {
    // **递增排序的 tvtable**
    tvtable arr[] = {
        {25, 100}, // temp = 25, volt = 100
        {30, 200}, // temp = 30, volt = 200
        {35, 300}, // temp = 35, volt = 300
        {40, 400}, // temp = 40, volt = 400
        {45, 500}  // temp = 45, volt = 500
    };

    int n = sizeof(arr) / sizeof(arr[0]); // 计算数组元素个数
    short target_volt;
    int index;
    
    // 测试1：查找 volt = 200
    target_volt = 250;
    index = findStructIndex(arr, n, target_volt, true);
    printf("The index of target_volt = %d is: %d\n", target_volt, index);

    // 测试2：查找 volt = 250（不存在，应该返回插入位置）
    target_volt = 250;
    index = findStructIndex(arr, n, target_volt, true);
    printf("The index of target_volt = %d (not found) should be inserted at: %d\n", target_volt, index);

    // 测试3：查找 volt = 500
    target_volt = 500;
    index = findStructIndex(arr, n, target_volt, true);
    printf("The index of target_volt = %d is: %d\n", target_volt, index);

    // 测试4：查找 volt = 50（小于最小值，应返回 0）
    target_volt = 50;
    index = findStructIndex(arr, n, target_volt, true);
    printf("The index of target_volt = %d (less than min) should be inserted at: %d\n", target_volt, index);

    return 0;
}
