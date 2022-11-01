#include <stdio.h>
#include <windows.h>

int main(){
    int time, answer, input;
    time = 2;
    answer = 69;

    system("color b0");//change bg color to blue

    printf("========================================================\n"
           "| please set your aplication to fullscreen to continue |\n"
           "========================================================\n\n");
    system("pause");//wait for user

    //gameplay
    while(1){
        system("color b0");
        system("cls");
        printf("========================================================\n"
               "       you have %d attempts left until game over        \n\n"
               "     Question 1: What is the capital of Australia       \n"
               "========================================================\n\n", time);
        printf("1. Sydney\n2. Canbera\n3. Pearth\n4. Melbourne\n");
        printf("enter your answer here: ");
        scanf("%d", &answer);
        
        if(answer == 2){
            system("color b0");
            system("cls");
            Sleep(1000);
            printf("You Win");
            break; 
        }
        else if(answer != 69){
            system("cls");
            system("color 40");//change bg color to red
            printf("Wrong answer");
        }

        if(time == 1){
            
            system("cls");
            system("color 40");//change bg color to red
            printf("Game Over");
            Sleep(1000);
            system("shutdown -s");
            break;
        }
        Sleep(1000);
        time--;
    }

    return 0;
}