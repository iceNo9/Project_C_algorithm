#include <stdio.h>
#include <stdbool.h>

int findIndexInt(int arr[], int n, int target, bool is_low) {
    if (n == 0) return -1; // 处理空数组情况
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }        
    }
    // 处理插入位置
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 unsigned int 类型
int findIndexUInt(unsigned int arr[], int n, unsigned int target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        unsigned int temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 char 类型
int findIndexChar(char arr[], int n, char target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        char temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 unsigned char 类型
int findIndexUChar(unsigned char arr[], int n, unsigned char target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        unsigned char temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 short 类型
int findIndexShort(short arr[], int n, short target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        short temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 unsigned short 类型
int findIndexUShort(unsigned short arr[], int n, unsigned short target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        unsigned short temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

// 对于 long 类型
int findIndexLong(long arr[], int n, long target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }

// 对于 unsigned long 类型
int findIndexULong(unsigned long arr[], int n, unsigned long target, bool is_low) {
    if (n == 0) return -1;
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        unsigned long temp = arr[mid];
        if (temp == target) {
            return mid;
        } else if (temp < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (left == 0) {
        return 0;
    } else if (left == n) {
        return n-1;
    } else {
        return is_low ? (left - 1) : left;
    }
}

int main() {
    // 示例数组
    int arrInt[] = {1, 3, 5, 7, 9};
    unsigned int arrUInt[] = {1, 3, 5, 7, 9};

    char arrChar[] = {1, 3, 5, 7, 9};
    unsigned char arrUChar[] = {1, 3, 5, 7, 9};
    short arrShort[] = {1, 3, 5, 7, 9};
    unsigned short arrUShort[] = {1, 3, 5, 7, 9};
    long arrLong[] = {1, 3, 5, 7, 9};
    unsigned long arrULong[] = {1, 3, 5, 7, 9};

    int n = 5;
    int targetInt = 2;
    unsigned int targetUInt = 5;
    char targetChar = 7;
    unsigned char targetUChar = 5;
    short targetShort = 3;
    unsigned short targetUShort = 9;
    long targetLong = 7;
    unsigned long targetULong = 9;

    // 调用对应的查找函数并打印结果
    printf("Index in int array: %d\n", findIndexInt(arrInt, n, targetInt, true));
    printf("Index in unsigned int array: %d\n", findIndexUInt(arrUInt, n, targetUInt, true));
    printf("Index in char array: %d\n", findIndexChar(arrChar, n, targetChar, true));
    printf("Index in unsigned char array: %d\n", findIndexUChar(arrUChar, n, targetUChar, true));
    printf("Index in short array: %d\n", findIndexShort(arrShort, n, targetShort, true));
    printf("Index in unsigned short array: %d\n", findIndexUShort(arrUShort, n, targetUShort, true));
    printf("Index in long array: %d\n", findIndexLong(arrLong, n, targetLong, true));
    printf("Index in unsigned long array: %d\n", findIndexULong(arrULong, n, targetULong, true));

    // 测试数组
    n = sizeof(arrInt) / sizeof(arrInt[0]); // 计算数组的元素个数

    // 测试1: 小于左边界的值（小于 1）
    int target = 0;
    int index = findIndexInt(arrInt, n, target, false);
    printf("Target %d: Insert position (less than left boundary) is at index %d\n", target, index);

    // 测试2: 等于左边界的值（等于 1）
    target = 1;
    index = findIndexInt(arrInt, n, target, false);
    printf("Target %d: Index (equals left boundary) is at index %d\n", target, index);

    // 测试3: 大于右边界的值（大于 9）
    target = 10;
    index = findIndexInt(arrInt, n, target, false);
    printf("Target %d: Insert position (greater than right boundary) is at index %d\n", target, index);

    // 测试4: 等于右边界的值（等于 9）
    target = 9;
    index = findIndexInt(arrInt, n, target, false);
    printf("Target %d: Index (equals right boundary) is at index %d\n", target, index);

    // 测试5: 中间值（等于 5）
    target = 5;
    index = findIndexInt(arrInt, n, target, false);
    printf("Target %d: Index (middle value) is at index %d\n", target, index);

    // 测试6: 插入位置（介于两个值之间，应该返回插入位置）
    target = 6; // 不存在于数组中，插入位置应该在 3 的后面，即 index 3
    index = findIndexInt(arrInt, n, target, true);
    printf("Target %d: Insert position (between 5 and 7) is at index %d\n", target, index);

    // 测试7: 插入位置（介于两个值之间，查找较大索引）
    target = 6;
    index = findIndexInt(arrInt, n, target, false); // 查找较大索引
    printf("Target %d: Insert position (between 5 and 7, with higher index) is at index %d\n", target, index);

    return 0;
}
