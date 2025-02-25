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
        } else if (arr[mid].volt < target_volt) {
            right = mid - 1;
        } else {
            left = mid + 1;
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
    // 创建一个 tvtable 类型的数组
    tvtable arr[] = {
        {25, 500}, // temp = 25, volt = 100
        {30, 400}, // temp = 30, volt = 150
        {35, 300}, // temp = 35, volt = 200
        {40, 200}, // temp = 40, volt = 250
        {45, 100}  // temp = 45, volt = 300
    };

    int n = sizeof(arr) / sizeof(arr[0]); // 数组的元素数量
    short target_volt = 110; // 目标 volt 值
    bool is_low = true; // 设定查找最低索引

    // 测试：查找 volt = 200 的位置
    int index = findStructIndex(arr, n, target_volt, is_low);
    printf("The index of target_volt = %d is: %d\n", target_volt, index);

    // 测试：查找 volt = 250 的位置
    target_volt = 250;
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("The index of target_volt = %d is: %d\n", target_volt, index);

    // 测试：查找 volt = 350 的位置（该值不存在，应该返回插入位置）
    target_volt = 350;
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("The index of target_volt = %d is: %d\n", target_volt, index);

    // 测试：查找 volt = 150 的位置
    target_volt = 150;
    is_low = false; // 查找较大的索引
    index = findStructIndex(arr, n, target_volt, is_low);
    printf("The index of target_volt = %d is: %d\n", target_volt, index);

    return 0;
}
