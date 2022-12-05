//
// Created by jerry on 2022/12/2.
//
#include <stdio.h>

//关键字 char short int long float double struct union enum singed void

//占1个字节 字符类型 有符号:-2^7~2^7-1 无符号 0~2^8-1
char ch1 = '1';
//short 短整型 使用short短整型变量,占2字节 有符号:-2^15~2^15-1 无符号 0~2^16-1
//范围 -32768-32767
short int a = 100;
//int 整数型 32位系统下占4字节 64位不变 16平台下2字节 有符号:-2^31~2^31-1 无符号 0~2^32-1
//范围 -20亿-20亿
int b = 44;
//long长整形 32位系统4字节 64位操作系统8字节
long b1 = 9L;
//float 浮点类型 实数 4字节
float b2 = 3.8f;
//double 双浮点 用double定义的变量是双浮点类型实数 8字字节
double b3 = 3.8;
//struct 结构体类型
//union 共用体类型
//enum 枚举类型
//signed 有符号的意思 定义char short int long修饰表示定义数据是有符号的 可以保正或负 通常可以省略
signed short b4 = -3;
//unsigned 无符号类型 只能保持正数或0
//void 代表函数没有返回值

//测试占用大小 sizeof
int main() {
    char ch;
    short s1;
    int i1;
    long l1;
    float f1;
    double d1;

    printf("%d\n",sizeof(ch));
    printf("%d\n",sizeof(s1));
    printf("%d\n",sizeof(i1));
    printf("%d\n",sizeof(l1));
    printf("%d\n",sizeof(f1));
    printf("%d\n",sizeof(d1));
    return 0;
}