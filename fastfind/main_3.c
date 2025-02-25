#include <stdio.h>
#include <stdbool.h>

typedef struct {
    short temp;
    short volt;
} tvtable;

// 递减数组的查找函数
int findStructIndex(tvtable arr[], int n, short target_volt, bool is_low) {
    if (n == 0) return -1; // 处理空数组情况
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].volt == target_volt) {
            return mid;
        } else if (arr[mid].volt < target_volt) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    // 处理插入位置
    if (left == 0) {
        return 0;  // 超过最小值时，插入位置为 0
    } else if (left == n) {
        return n-1;  // 超过最大值时，插入位置为数组长度-1
    } else {
        return is_low ? (left - 1) : left;  // 根据 is_low 确定是返回较小还是较大的位置
    }
}

int main() {
    // 创建一个 tvtable 类型的数组（递减排序）
    tvtable arr[] = {
        {25, 500}, // temp = 25, volt = 500
        {30, 400}, // temp = 30, volt = 400
        {35, 300}, // temp = 35, volt = 300
        {40, 200}, // temp = 40, volt = 200
        {45, 100}  // temp = 45, volt = 100
    };

    int n = sizeof(arr) / sizeof(arr[0]); // 数组的元素数量
    short target_volt;
    bool is_low;

    // **测试1**: 查找 volt = 200 的位置
    target_volt = 200;
    is_low = true; // 查找最低索引
    int index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (lowest index)\n", target_volt, index);

    // **测试2**: 查找 volt = 250 的位置（该值不存在，插入位置）
    target_volt = 250;
    is_low = true; // 查找最低索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (insert position)\n", target_volt, index);

    // **测试3**: 查找 volt = 350 的位置（该值不存在，插入位置）
    target_volt = 350;
    is_low = true; // 查找最低索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (insert position)\n", target_volt, index);

    // **测试4**: 查找 volt = 100 的位置（等于右边界值）
    target_volt = 100;
    is_low = true; // 查找最低索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (right boundary)\n", target_volt, index);

    // **测试5**: 查找 volt = 300 的位置（中间值）
    target_volt = 300;
    is_low = true; // 查找最低索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (middle value)\n", target_volt, index);

    // **测试6**: 查找 volt = 400 的位置（等于左边界值）
    target_volt = 400;
    is_low = true; // 查找最低索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (left boundary)\n", target_volt, index);

    // **测试7**: 查找 volt = 250 的位置（该值不存在，插入位置，查找较大的索引）
    target_volt = 250;
    is_low = false; // 查找较大的索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (insert position with higher index)\n", target_volt, index);

    // **测试8**: 查找小于数组最小值的情况
    target_volt = 600;  // 大于所有元素
    is_low = true;  // 查找最小的插入位置
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (greater than all elements)\n", target_volt, index);

    // **测试9**: 查找大于数组最大值的情况
    target_volt = 0;  // 小于所有元素
    is_low = true;  // 查找最小的插入位置
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("Target volt = %d: The index is %d (less than all elements)\n", target_volt, index);

    return 0;
}
