
//  Copyright ©️ 2020 Ikmal Azman. All rights reserved.
//
//  Program ID  - main.c
//  Author      - Ikmal Azman
//  OS          - macOS
//  Interpreter - Xcode


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 10

int main() {
    int item, choice, i;
    int arr_queue[MAX_SIZE];
    int rear = 0;
    int front = 0;
    int exit = 1;

    printf("\n***ABC Car Wash Services SDN BHD***");
    do {
        printf("\n\nMain Menu");

//        printf("*** Hi! Welcome To ABC Car Wash Services SDN BHD *** \n\n 1 : Add Car\n 2 : Remove Car\n 3 : List of Car to be Washed\n 4 : Total Numbe Of Cars\n Q : Quit\n");
        printf("\n1.Insert Car Plate No. \n2.Remove Car Plate No. \n3.Display List of Car to be Washed\n4.Total Number of Cars\n5.Exit\n");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (rear == MAX_SIZE)
                    printf("\n## Car Wash is Full!!");
                else {
                    printf("\nEnter The Car Plate No to be Insert : ");
                    scanf("%d", &item);
                    printf("\n## Position : %d , Insert Car   : %d ", rear + 1, item);
                    arr_queue[rear++] = item;
                }
                break;
            case 2:
                if (front == rear)
                    printf("\n## Car Wash is Empty!");
                else {
                    printf("\n## Position : %d , Remove Car Plate No : %d ", front, arr_queue[front]);
                    front++;
                }
                break;
            case 3:
                printf("\n## List Number Of Car to be Washed : %d ", rear);
                for (i = front; i < rear; i++)
                    printf("\n## Position : %d , Car  : %d ", i, arr_queue[i]);
                break;
                
            case 4:
                for (i = front; i < rear; i++)
                    printf("\n## Position : %d , Car  : %d \n", i, arr_queue[i]);
                
                printf("Total Number Of Car = %d" ,i );
                break;
            default:
                exit = 0;
                break;
        }
    } while (exit);

    return 0;
}
