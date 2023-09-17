/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*#include <stdio.h>

int main() {
    int N;
    printf("Input N: ");
    scanf("%d", &N);

    // สร้างอาเรย์เพื่อเก็บข้อมูล
    int data[N];

    // รับข้อมูลจากผู้ใช้และเก็บลงในอาเรย์
    for (int i = 0; i < N; i++) {
        printf("Element[%d] : ", i);
        scanf("%d", &data[i]);
    }

    // สร้างตัวแปรเพื่อนับจำนวนครั้งที่ข้อมูลซ้ำกัน
    int count_dict[1000] = {0};

    for (int i = 0; i < N; i++) {
        count_dict[data[i]]++;
    }

    // แสดงผลลัพธ์
    for (int i = 0; i < 1000; i++) {
        if (count_dict[i] > 0) {
            printf("%d -> %d value.\n", i, count_dict[i]);
        }
    }

    return 0;
}
