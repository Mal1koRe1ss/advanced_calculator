#include <stdio.h>
#include "include/calculations.h"
#include "include/area_calculations.h"
#include "include/angle_calculations.h"

#ifdef _WIN32 
    // ? Shitty OS
    #include <windows.h>
#else
    #include <unistd.h>
#endif


#define PI 3
#define PI14 3.14

void wait(unsigned int seconds) {
    #ifdef _WIN32
        Sleep(seconds * 1000);
    #else
        sleep(seconds);
    #endif
}

void clear_console() {
    printf("\e[1;1H\e[2J");
}

int main()
{
    int running = 1;
    double pi = PI14;

    while (running)
    {
        int choice;
        clear_console();
        printf("1 - Area Calculations\n");
        printf("2 - Advanced(functions etc.) Calculations\n");
        printf("3 - Angle Calculations\n");
        printf("4 - Settings\n");
        printf("5 - Exit\n");
        printf("Your choice : ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1: {
                int area_choice;
                clear_console();
                printf("1 - Circles Area\n");
                printf("2 - Trapezoid Area\n");
                printf("3 - Rhombus Area(V1) ((Height.Ground)/2)\n");
                printf("4 - Rhombus Area(V2) (Height.Ground)\n");
                printf("5 - Polygons\n");
                printf("6 - Triangles Area\n");
                printf("7 - Squares Area\n");
                printf("Your choice : ");
                scanf("%d", &area_choice);
            switch (area_choice)
            {
                case 1: {
                    int radius;
                    clear_console();
                    printf("Radius of the Circle : ");
                    scanf("%d", &radius);
                    printf("Answer : %.2f\n", circle_area(pi, radius));
                    wait(1.75);
                    break;
                }
                case 2: {
                    double up, down, height;
                    clear_console();
                    printf("Up value : ");
                    scanf("%lf", &up);
                    printf("Down value : ");
                    scanf("%lf", &down);
                    printf("Height value : ");
                    scanf("%lf", &height);
                    printf("Answer : %.2f\n", trapezoid_area(up, down, height));    
                    wait(1.75);
                    break;
                }
                case 3: {
                    double height, width;
                    clear_console();
                    printf("Height value : ");
                    scanf("%lf", &height);
                    printf("Width value : ");
                    scanf("%lf", &width);
                    printf("Answer : %.2f\n", rhombus_area(height, width));
                    wait(1.75);
                    break;
                }
                case 4: {
                    double height, width;
                    clear_console();
                    printf("Height value : ");
                    scanf("%lf", &height);
                    printf("Width value : ");
                    scanf("%lf", &width);
                    printf("Answer : %.2f\n", rhombus_areav2(height, width));
                    wait(1.75);
                    break;
                }
                case 5: {
                    double n;
                    clear_console();
                    printf("Number of edges");
                    scanf("%lf",&n);
                    polygon(n);
                    wait(1.75);
                    break;
                }
                case 6: {
                    double a,h;
                    clear_console();
                    printf("Ground value : ");
                    scanf("%lf", &a); 
                    printf("Height value : ");
                    scanf("%lf", &h);
                    printf("Answer : %.2f\n", triangle_area(a, h));
                    wait(1.75);
                    break;
                }
                case 7: {
                    double a,b;
                    clear_console();
                    printf("First edges length : ");
                    scanf("%lf", &a);
                    printf("Second edges length : ");
                    scanf("%lf", &b);
                    printf("Answer :  %.2f\n", square_area(a,b));
                    wait(1.75);
                    break;
                }
                default: {
                    printf("Invalid choice!\n");
                    break;
                }
            }
            break;
        }
            case 2: {
                int advanced_choice;
                clear_console();
                printf("1 - f(x)\n");
                printf("2 - Quadratic equation\n");
                printf("3 - Exponential function\n");
                printf("4 - Trigonometry\n");
                printf("5 - Length of a circles piece\n");
                printf("Your choice : ");
                scanf("%d", &advanced_choice);

                switch (advanced_choice)
                {
                case 1: {
                    double x;
                    clear_console();
                    printf("The value of x : ");
                    scanf("%lf", &x);
                    printf("Answer : %.2f\n", fx(x));
                    wait(1.75);
                    break;
                }
                case 2: {
                    double x;
                    clear_console();
                    printf("The value of x : ");
                    scanf("%lf", &x);
                    printf("Answer : %.2f\n", quadratic(x));
                    wait(1.75);
                    break;
                }
                case 3: {
                    double x;
                    clear_console();
                    printf("The value of x : ");
                    scanf("%lf", &x);
                    printf("Answer : %.2f\n", exponential(x));
                    wait(1.75);
                    break;
                }
                case 4: {
                    double x;
                    clear_console();
                    printf("The value of x :");
                    scanf("%lf", &x);
                    printf("Answer : %.2f\n", trig(x));
                    wait(1.75);
                    break;
                }
                case 5: {
                    double radius, angle;
                    clear_console();
                    printf("The radius of the circle : ");
                    scanf("%lf", &radius);
                    printf("The angle of the piece : ");
                    scanf("%lf", &angle);
                    printf("Answer : %.2f\n", len_circle_piece(pi, radius, angle));
                    wait(1.75);
                    break;
                }
                default:
                    printf("Invalid choice!\n");
                    break;
                break;
                }
            
                break;
            }
            case 3: {
                int angle_choice;
                clear_console();
                printf("1 - Triangles left out angle\n");
                printf("Your choice : ");
                scanf("%d", &angle_choice);

                switch (angle_choice)
                {
                case 1: {
                    double a, b;
                    clear_console();
                    printf("First angle of the triangle : ");
                    scanf("%lf", &a);
                    printf("Second angle of the triangle : ");
                    scanf("%lf", &b);
                    printf("Answer : %.2f\n", triangle(a, b));
                    wait(1.75);
                    break;
                }
                default:
                    printf("Invalid choice!\n");
                    break;
                }
                break;
            }
            case 4: {
                int pi_choice;
                clear_console();

                printf("Which π value you are going to use?\n");
                printf("1 - 3 (integer)\n");
                printf("2 - 3.14 (float)\n");
                printf("Your choice: ");
                scanf("%d", &pi_choice);

                pi = (pi_choice == 1) ? 3 : 3.14;

                clear_console();
                printf("Selected π value: ");
                (pi == (int)pi)
                    ? printf("%d (integer)\n", (int)pi)
                    : printf("%.2f (float)\n", pi);

                wait(1.75);
                break;
            }
            case 5: {
                    running = 0;
                    clear_console();
                    printf("Exiting...\n");
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

    return 0;
}
