#include <stdio.h> // นำเข้าไลบรารีสำหรับการใช้งานฟังก์ชันมาตรฐาน เช่น printf และ scanf

int main() { // ฟังก์ชันหลักของโปรแกรมที่เป็นจุดเริ่มต้นการทำงาน
    int start_number, stop_number; // ประกาศตัวแปรสำหรับเก็บค่าเริ่มต้นและค่าสุดท้าย

    // ลูป while จะทำงานไปเรื่อยๆ จนกว่าเงื่อนไขในวงเล็บจะเป็นจริง
    // คือ start_number น้อยกว่า stop_number
    while (1) { // ใช้ while(1) เพื่อให้ลูปทำงานไม่รู้จบจนกว่าจะเจอคำสั่ง break
        // ให้ผู้ใช้กรอกค่าเริ่มต้นและค่าสุดท้าย
        printf("กรุณากรอกค่าเริ่มต้น (Start number): ");
        scanf("%d", &start_number);
        printf("กรุณากรอกค่าสุดท้าย (Stop number): "); 
        scanf("%d", &stop_number);

        // ตรวจสอบเงื่อนไขตามที่โจทย์กำหนด
        if (start_number < stop_number) {
            // ถ้า start_number น้อยกว่า stop_number
            // จะออกจากลูป while และไปทำงานส่วนต่อไป
            break; 
        } else if (start_number == stop_number) {
            // ถ้า start_number เท่ากับ stop_number
            // ให้แสดงข้อความแจ้งเตือน
            printf("Your Start number is equal to Stop number, please try again!\n");
        } else {
            // ถ้า start_number มากกว่า stop_number
            // ให้แสดงข้อความแจ้งเตือน
            printf("Your Start number is greater than Stop number, please try again!\n");
        }

        printf("\n"); // เพิ่มบรรทัดว่างเพื่อให้ดูง่ายขึ้น
    }

    printf("\n"); // เพิ่มบรรทัดว่างก่อนแสดงผลลัพธ์

    // ถ้าเงื่อนไขถูกต้อง (start_number < stop_number)
    // โปรแกรมจะมาทำงานในส่วนนี้ เพื่อแสดงผลลัพธ์
    printf("ผลลัพธ์:\n");
    for (int i = start_number; i <= stop_number; i++) { // ลูป for เพื่อแสดงตัวเลขจาก start_number ถึง stop_number
        printf("%d ", i); 
    }
    printf("\n"); // เพิ่มบรรทัดว่างหลังแสดงผลลัพธ์

    return 0; // ส่งค่ากลับ 0 เพื่อบอกว่าการทำงานของโปรแกรมเสร็จสมบูรณ์
}