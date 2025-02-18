#include <stdio.h>
#include <stdlib.h>

void processData() {
    int* data = (int*)malloc(10 * sizeof(int)); // 动态分配内存bj 
    if (data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }

    // 使用data进行一些操作...

    free(data); // 释放内存
}

int main() {
    while (1) {
        processData();
    }
    return 0;
}
