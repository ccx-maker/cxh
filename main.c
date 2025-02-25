#include <stdio.h>
#include <stdlib.h>

// 定义一个结构体来模拟C++中的类A
typedef struct {
    int value;
} A;

// 定义函数来模拟C++中的成员函数
void dumb(const A* a) {
    printf("dumb()\n");
}

void set(A* a, int x) {
    printf("set()\n");
    a->value = x;
}

int get(const A* a) {
    printf("get()\n");
    return a->value;
}

int main() {
    // 动态分配内存给结构体A的实例
    A* pA1 = (A*)malloc(sizeof(A));
    if (pA1 == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    A* pA2 = NULL; // 这是一个空指针

    // 通过pA1调用函数
    dumb(pA1);
    set(pA1, 20);
    printf("%d\n", get(pA1));

    dumb(pA2);
    set(pA2, 40);
    printf("%d\n", get(pA2)); 

   
    free(pA1);

    return 0;
}
