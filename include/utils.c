#include <stdio.h>
#include <stdlib.h>
#include "menus.h"
#include "utils.h"

double pi = 3.14;

#ifdef _WIN32 
    // ? Shitty OS
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void wait(unsigned int seconds) {
    #ifdef _WIN32
        Sleep(seconds * 1000);
    #else
        sleep(seconds);
    #endif
}

void wait_for_enter_key() {
    printf("Press Enter to continue...");
    fflush(stdout);
    
    #ifdef _WIN32
        while (_getch() != 13);
    #else
        system("stty raw -echo");
        while (getchar() != 13);
        system("stty sane");
    #endif
}

void clear_console() {
    printf("\e[1;1H\e[2J");
}

void menu(int running) {
    while (running)
    {
        int choice;
        clear_console();
        printf("1 - Area Calculations\n");
        printf("2 - Angle Calculations\n");
        printf("3 - Advanced(functions etc.) Calculations\n");
        printf("4 - Bitwise Calculations\n");
        printf("5 - Perimeter Calculations\n");
        printf("6 - Settings\n");
        printf("7 - Exit\n");
        printf("Your choice : ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1: {
            menu_area();
            break;
        }
        case 2: {
            menu_angle();
            break;
            }
        case 3: {
            menu_advanced();
            break;
            }
        case 4: {
            menu_bitwise();
            break;
            }
        case 5: {
            menu_perimeter();
            break;
            }
        case 6: {
            menu_settings();
            break;
        }
        case 7: {
            running = 0;
            menu_exit(running);
            break;
        }
        default: {
            clear_console();
            printf("Invalid choice!\n");
            wait(1.5);
            clear_console();
            break;
            }
        }
  }
}

void change_pi(double new_value) {
    pi = new_value;
}
