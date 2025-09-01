#include <stdio.h>

int main() {
    int x, y;

    // รับค่าเลขเข้าตัวแปรผ่านคีบอร์ด
    printf("กรอกค่า x: ");
    scanf("%d", &x);
    printf("กรอกค่า y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่ามากกว่าน้อยกว่า
    if (x > y) {
        printf("x มากกว่า y\n");
    } else if (x < y) {
        printf("x น้อยกว่า y\n");
    } else {
        printf("x เท่ากับ y\n");
    }

    return 0;
}