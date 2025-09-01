#include <stdio.h>
int main() {
    float score;

    // รับคะแนน midterm จากคีบอร์ด
    printf("กรอกคะแนนสอบ midterm: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไข ถ้าคะแนน >= 50 คะแนน จะเพิ่มคะแนนอีก 5%
    if (score >= 50) {
        score = score + (score * 0.05);
    }

    // ผลรวมของคะแนน
    printf("คะแนนรวม = %.2f\n", score);

    // สิ้นสุดการประเมิน
    printf("End of evaluation\n");

    return 0;
}