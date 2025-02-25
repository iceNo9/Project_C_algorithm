#include <stdio.h>
#include <stdbool.h>

int findIndexIntDec(int arr[], int n, int target, bool is_low) {
    if (n == 0) return -1; // 处理空数组情况
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;  // 目标值在右半部分
        } else {
            right = mid - 1; // 目标值在左半部分
        }
    }
    // 处理插入位置
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 unsigned int 类型
int findIndexUIntDec(unsigned int arr[], int n, unsigned int target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

// 对于 char 类型
int findIndexCharDec(char arr[], int n, char target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

// 对于 unsigned char 类型
int findIndexUCharDec(unsigned char arr[], int n, unsigned char target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

// 对于 short 类型
int findIndexShortDec(short arr[], int n, short target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

// 对于 unsigned short 类型
int findIndexUShortDec(unsigned short arr[], int n, unsigned short target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

// 对于 long 类型
int findIndexLongDec(long arr[], int n, long target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

// 对于 unsigned long 类型
int findIndexULongDec(unsigned long arr[], int n, unsigned long target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n - 1;
    } else {
        return is_low ? (left - 1) : left;
}

int main() {
    // 示例数组
    int arrInt[] = {9, 7, 5, 3, 1};
    unsigned int arrUInt[] = {300, 250, 200, 150, 100};
    char arrChar[] = {100, 90, 80, 70, 60};
    unsigned char arrUChar[] = {100, 90, 80, 70, 60};
    short arrShort[] = {100, 90, 80, 70, 60};
    unsigned short arrUShort[] = {100, 90, 80, 70, 60};
    long arrLong[] = {1000, 900, 800, 700, 600};
    unsigned long arrULong[] = {1000, 900, 800, 700, 600};

    int n = 5;
    int targetInt = 301;
    unsigned int targetUInt = 200;
    char targetChar = 80;
    unsigned char targetUChar = 80;
    short targetShort = 80;
    unsigned short targetUShort = 80;
    long targetLong = 700;
    unsigned long targetULong = 700;

    // 调用对应的查找函数并打印结果
    printf("Index in int array: %d\n", findIndexIntDec(arrInt, n, targetInt, true));
    printf("Index in unsigned int array: %d\n", findIndexUIntDec(arrUInt, n, targetUInt, true));
    printf("Index in char array: %d\n", findIndexCharDec(arrChar, n, targetChar, true));


    // 测试递减排序的数组
    
    n = sizeof(arrInt) / sizeof(arrInt[0]); // 计算数组元素个数

    // 测试1: 小于左边界的值（小于 9）
    int target = 0;
    int index = findIndexIntDec(arrInt, n, target, true);
    printf("Target %d: Insert position (less than left boundary) is at index %d\n", target, index);

    // 测试2: 等于左边界的值（等于 9）
    target = 9;
    index = findIndexIntDec(arrInt, n, target, true);
    printf("Target %d: Index (equals left boundary) is at index %d\n", target, index);

    // 测试3: 大于右边界的值（大于 1）
    target = 10;
    index = findIndexIntDec(arrInt, n, target, true);
    printf("Target %d: Insert position (greater than right boundary) is at index %d\n", target, index);

    // 测试4: 等于右边界的值（等于 1）
    target = 1;
    index = findIndexIntDec(arrInt, n, target, true);
    printf("Target %d: Index (equals right boundary) is at index %d\n", target, index);

    // 测试5: 中间值（等于 5）
    target = 5;
    index = findIndexIntDec(arrInt, n, target, true);
    printf("Target %d: Index (middle value) is at index %d\n", target, index);

    // 测试6: 插入位置（介于两个值之间，应该返回插入位置）
    target = 6; // 不存在于数组中，插入位置应该在 5 和 3 之间，即 index 2
    index = findIndexIntDec(arrInt, n, target, true);
    printf("Target %d: Insert position (between 5 and 3) is at index %d\n", target, index);

    // 测试7: 插入位置（介于两个值之间，查找较大索引）
    target = 6;
    index = findIndexIntDec(arrInt, n, target, false); // 查找较大索引
    printf("Target %d: Insert position (between 5 and 3, with higher index) is at index %d\n", target, index);

    return 0;
}