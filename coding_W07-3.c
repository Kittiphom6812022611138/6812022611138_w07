#include <stdio.h>
int main() {
    int level;
    printf("Enter level: ");
    scanf("%d", &level);

    if (level < 1) {
        printf("Level below 1 is not allowed\n");
    } else if (level > 4) {
        printf("Level above 4 is not allowed\n");
    } else {
        
        switch (level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
            default:
                printf("Invalid level\n");
        }
    }
    return 0;
}
//ถ้าผู้ใช้กดเลือกชั้นระหว่าง1-4 outputจะออกตามที่ตั้งไว้ตามลำดับ Beginner,Intermediate,Advanced,Expert
//แต่ถ้าผู้ใช้เลือกชั้นที่น้อยกว่า 1 output จะออก "Level below 1 is not allowed"
//เเละถ้าผู้ใช้เลือกชั้นที่มากกว่า 4 outputจะออก "Level above 4 is not allowed"