#include <stdio.h>
#include "utils.h"
#include "calculations.h"
#include "area_calculations.h"
#include "angle_calculations.h"
#include "perimeter_calculations.h"
#include "bitwise.h"
#include "science_and_engineering.h"
#include "physical_calculations.h"

void menu_exit() {
    clear_console();
    printf("Exiting...\n");
}

void menu_area() {
    int area_choice;
    clear_console();
    printf("1 - Circles Area\n");
    printf("2 - Trapezoid Area\n");
    printf("3 - Rhombus Area(V1) ((Height.Ground)/2)\n");
    printf("4 - Rhombus Area(V2) (Height.Ground)\n");
    printf("5 - Polygons\n");
    printf("6 - Triangles Area\n");
    printf("7 - Squares Area\n");
    printf("8 - Rectangles Area\n");
    printf("9 - Return to main menu\n");
    printf("Your choice : ");
    scanf("%d", &area_choice);
    switch (area_choice)
    {
        case 1: {
            int radius;
            clear_console();
            printf("Radius of the Circle : ");
            scanf("%d", &radius);
            extern double pi;
            printf("Answer : %.2f\n", circle_area(pi, radius));
            wait_for_enter_key();
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
            wait_for_enter_key();
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
            wait_for_enter_key();
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
            wait_for_enter_key();
            break;
        }
        case 5: {
            double n;
            clear_console();
            printf("Number of edges");
            scanf("%lf",&n);
            polygon(n);
            wait_for_enter_key();
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
            wait_for_enter_key();
            break;
        }
        case 7: {
            double a;
            clear_console();
            printf("Edge length : ");
            scanf("%lf", &a);
            printf("Answer :  %.2f\n", square_area(a));
            wait_for_enter_key();
            break;
        }
        case 8: {
            double a,b;
            clear_console();
            printf("Longer edge length : ");
            scanf("%lf", &a);
            printf("Shorter edge length : ");
            scanf("%lf", &b);
            printf("Answer : %.2f\n", rectangle_area(a, b));
            wait_for_enter_key();
            break;
        }
        case 9: {
            break;
        }
        default: {
            printf("Invalid choice!\n");
            break;
        }
    }
}

void menu_perimeter() {
    extern double pi;
    int perimeter_choice;
    clear_console();
    printf("1 - Squares Perimeter\n");
    printf("2 - Triangles Perimeter\n");
    printf("3 - Circles Perimeter\n");
    printf("4 - Parallelograms Perimeter\n");
    printf("5 - Equilateral Triangles Perimeter\n");
    printf("6 - nGens Perimeter (You decide how many edges are in the shape)\n");
    printf("7 - Trapezoids Perimeter\n");
    printf("8 - Circle Arcs Perimeter\n");
    printf("9 - Circle Pieces Perimeter\n");
    printf("10 - Elipse Perimeter\n");
    printf("11 - Cardioid Perimeter\n");
    printf("12 - Return to main menu\n");
    printf("Your choice : ");
    scanf("%d", &perimeter_choice);

    switch (perimeter_choice)
    {
    case 1: {
        double a;
        clear_console();
        printf("One edge length : ");
        scanf("%lf", &a);
        printf("Answer : %.2f\n", square_perimeter(a));
        wait_for_enter_key(); 
        break;
    }
    case 2: {
        double a, b, c;
        clear_console();
        printf("First edges length : ");
        scanf("%lf", &a);
        printf("Second edges length : ");
        scanf("%lf", &b);
        printf("Third edges length : ");
        scanf("%lf", &c);
        printf("Answer : %.2f\n", triangle_perimeter(a, b, c));
        wait_for_enter_key();
        break;
    }
    case 3: {
        double radius;
        clear_console();
        printf("Radius : ");
        scanf("%lf", &radius);
        printf("Answer : %.2f\n", circle_perimeter(pi, radius));
        wait_for_enter_key();
        break;
    }
    case 4: {
        double a, b;
        clear_console();
        printf("First edge (Left one) : ");
        scanf("%lf", &a);
        printf("Second edge (Upper one) : ");
        scanf("%lf", &b);
        printf("Answer : %.2f\n", parallelogram_perimeter(a, b));
        wait_for_enter_key();
        break;
    }
    case 5: {
        double a;
        clear_console();
        printf("One edge length : ");
        scanf("%lf", &a);
        printf("Answer : %.2f\n", equilateral_triangle_perimeter(a));
        wait_for_enter_key();
        break;
    }
    case 6: {
        double n, a;
        clear_console();
        printf("How many edges(n) : ");
        scanf("%lf",&n);
        printf("One edge length : ");
        scanf("%lf",&a);
        printf("Answer : %.2f\n", ngen_perimeter(n, a));
        wait_for_enter_key();
        break;
    }
    case 7: {
        double a, b, c, d;
        clear_console();
        printf("First edge length : ");
        scanf("%lf", &a);
        printf("Second edge length : ");
        scanf("%lf", &b);
        printf("Third edge length : ");
        scanf("%lf", &c);
        printf("Fourth edge length : ");
        scanf("%lf", &d);
        printf("Answer : %.2f\n", trapezoid_perimeter(a, b, c, d));
        wait_for_enter_key();
        break;
    }
    case 8: {
        double center_angle, radius;
        clear_console();
        printf("Center angle : ");
        scanf("%lf", &center_angle);
        printf("Radius : ");
        scanf("%lf", &radius);
        printf("Answer : %.2f\n", circle_arc_perimeter(center_angle, pi, radius));
        wait_for_enter_key();
        break;
    }
    case 9: {
        double center_angle, radius;
        clear_console();
        printf("Center angle : ");
        scanf("%lf", &center_angle);
        printf("Radius : ");
        scanf("%lf", &radius);
        printf("Answer : %.2f\n", circle_piece_perimeter(center_angle, pi, radius));
        wait_for_enter_key();
        break;
    }
    case 10: {
        double big_radius, small_radius;
        clear_console();
        printf("Big radius : ");
        scanf("%lf", &big_radius);
        printf("Small radius : ");
        scanf("%lf", &small_radius);
        printf("Answer : %.2f\n", elipse_perimeter(pi, big_radius, small_radius));
        wait_for_enter_key();
        break;
    }
    case 11: {
        double a;
        clear_console();
        printf("Around point(a) : ");
        scanf("%lf", &a);
        printf("Answer : %.2f\n", cardioid_perimeter(a));
        wait_for_enter_key();
        break;
    }
    case 12: {
        break;
    }
    default:
        break;
    break;
    }
}

void menu_advanced() {
    extern double pi;
    int advanced_choice;
    clear_console();
    printf("1 - f(x)\n");
    printf("2 - Quadratic equation\n");
    printf("3 - Exponential function\n");
    printf("4 - Trigonometry\n");
    printf("5 - Length of a circles piece\n");
    printf("6 - Celcius to Fahrenheit\n");
    printf("7 - Fahrenheit to Celcius\n");
    printf("8 - Kilometers to Mile\n");
    printf("9 - Mile to Kilometers\n");
    printf("10 - Sinus\n");
    printf("11 - Cosinus\n");
    printf("12 - Logarithmic\n");
    printf("13 - Logarithmic(10)\n");
    printf("14 - Kinetic Energy\n");
    printf("15 - Gravitational Force\n");
    printf("16 - Return to the main menu\n");
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
        wait_for_enter_key();
        break;
    }
    case 2: {
        double x;
        clear_console();
        printf("The value of x : ");
        scanf("%lf", &x);
        printf("Answer : %.2f\n", quadratic(x));
        wait_for_enter_key();
        break;
    }
    case 3: {
        double x;
        clear_console();
        printf("The value of x : ");
        scanf("%lf", &x);
        printf("Answer : %.2f\n", exponential(x));
        wait_for_enter_key();
        break;
    }
    case 4: {
        double x;
        clear_console();
        printf("The value of x :");
        scanf("%lf", &x);
        printf("Answer : %.2f\n", trig(x));
        wait_for_enter_key();
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
        wait_for_enter_key();
        break;
    }
    case 6: {
        double celsius;
        clear_console();
        printf("Celsius : ");
        scanf("%lf",&celsius);
        printf("Fahrenheit : %.2f\n", celsius_to_fahrenheit(celsius));
        wait_for_enter_key();
        break;
    }
    case 7: {
        double fahrenheit;
        clear_console();
        printf("Fahrenheit : ");
        scanf("%lf", &fahrenheit);
        printf("Celsius : %.2f\n", fahrenheit_to_celsius(fahrenheit));
        wait_for_enter_key();
        break;
    }
    case 8: {
        double kilometer;
        clear_console();
        printf("Kilometer : ");
        scanf("%lf", &kilometer);
        printf("Mile : %.2f\n", km_to_mi(kilometer));
        wait_for_enter_key();
        break;
    }
    case 9: {
        double mile;
        clear_console();
        printf("Mile : ");
        scanf("%lf", &mile);
        printf("Kilometer : %.2f\n", mi_to_km(mile));
        wait_for_enter_key();
        break;
    }
    case 10: {
        double angle_deg;
        clear_console();
        printf("Angle degree : ");
        scanf("%lf", &angle_deg);
        printf("Answer : %.2f\n", calculate_sin(pi, angle_deg));
        wait_for_enter_key();
        break;
    }
    case 11: {
        double angle_deg;
        clear_console();
        printf("Angle degree : ");
        scanf("%lf", &angle_deg);
        printf("Answer : %.2f\n", calculate_cos(pi, angle_deg));
        wait_for_enter_key();
        break;
    }
    case 12: {
        double x;
        clear_console();
        printf("X : ");
        scanf("%lf", &x);
        printf("Answer : %.2f\n", calculate_ln(x));
        wait_for_enter_key();
        break;
    }
    case 13: {
        double x;
        clear_console();
        printf("X : ");
        scanf("%lf", &x);
        printf("Answer : %.2f\n", calculate_log10(x));
        wait_for_enter_key();
        break;
    }
    case 14: {
        double mass, velocity;
        clear_console();
        printf("Mass : ");
        scanf("%lf", &mass);
        printf("Velocity : ");
        scanf("%lf", &velocity);
        printf("Answer : %.2f\n", calculate_kinetic_energy(mass, velocity));
        wait_for_enter_key();
        break;
    }
    case 15: {
        double mass, mass2, distance;
        clear_console();
        printf("Mass 1 : ");
        scanf("%lf", &mass);
        printf("Mass 2 : ");
        scanf("%lf", &mass2);
        printf("Distance : ");
        scanf("%lf", &distance);
        printf("Answer : %.2f\n", calculate_gravitational_force(mass, mass2, distance));
        wait_for_enter_key();
        break;
    }
    case 16: {
        break;
    }
    default:
        printf("Invalid choice!\n");
        break;
    break;
    }
}

void menu_angle() {
    int angle_choice;
    clear_console();
    printf("1 - Triangles left out angle\n");
    printf("2 - Return to main menu\n");
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
        wait_for_enter_key();
        break;
    }
    case 2: {
        break;
    }
    default:
        printf("Invalid choice!\n");
        break;
    }
}

void menu_settings() {
    int settings_choice;
    clear_console();
    printf("1 - Change the value of π\n");
    printf("2 - Return to the main menu\n");
    scanf("%d", &settings_choice);

    switch (settings_choice)
    {
    case 1: {
        int pi_choice;
        double new_value;
        clear_console();

        printf("Which π value you are going to use?\n");
        printf("1 - 3 (integer)\n");
        printf("2 - 3.14 (float)\n");
        printf("Your choice: ");
        scanf("%d", &pi_choice);

        new_value = (pi_choice == 1) ? 3 : 3.14;
        change_pi(new_value);
        
        clear_console();
        printf("Selected π value: ");
        extern double pi;
        (pi == (int)pi)
            ? printf("%d (integer)\n", (int)pi)
            : printf("%.2f (float)\n", pi);

        wait_for_enter_key();
        break;
    }
    case 2: {
        break;
    }
    default:
        break;
    }    
}

void menu_bitwise() {
    int bitwise_choice;
    clear_console();
    printf("1 - Bitwise AND (&)\n");
    printf("2 - Bitwise OR (|)\n");
    printf("3 - Bitwise XOR (^)\n");
    printf("4 - Bitwise Left Shift (<<)\n");
    printf("5 - Bitwise Right Shift (>>)\n");
    printf("6 - Bitwise NOT (~)\n");
    printf("7 - Return to main menu\n");
    printf("Your choice : ");
    scanf("%d",&bitwise_choice);

    switch (bitwise_choice)
    {
    case 1: {
        unsigned int a, b;
        printf("First number : ");
        scanf("%d", &a);
        printf("Second number : ");
        scanf("%d", &b);
        printf("Answer : %d\n", bitwise_and(a, b));
        wait_for_enter_key();
        break;
    }
    case 2: {
        unsigned int a, b;
        printf("First number : ");
        scanf("%d", &a);
        printf("Second number : ");
        scanf("%d", &b);
        printf("Answer : %d\n", bitwise_or(a, b));
        wait_for_enter_key();
        break;
    }
    case 3: {
        unsigned int a, b;
        printf("First number : ");
        scanf("%d", &a);
        printf("Second number : ");
        scanf("%d", &b);
        printf("Answer : %d\n", bitwise_xor(a, b));
        wait_for_enter_key();
        break;
    }
    case 4: {
        unsigned int a, b;
        printf("First number : ");
        scanf("%d", &a);
        printf("Second number : ");
        scanf("%d", &b);
        printf("Answer : %d\n", bitwise_lshift(a, b));
        wait_for_enter_key();
        break;  
    }
    case 5: {
        unsigned int a, b;
        printf("First number : ");
        scanf("%d", &a);
        printf("Second number : ");
        scanf("%d", &b);
        printf("Answer : %d\n", bitwise_rshift(a, b));
        wait_for_enter_key();
        break;
    }
    case 6: {
        unsigned int a, b;
        printf("First number : ");
        scanf("%d", &a);
        printf("Second number : ");
        scanf("%d", &b);
        printf("Answer : %d\n", bitwise_not(a, b));
        wait_for_enter_key();
        break;
    }
    case 7: {
        break;
    }
    default:
        break;
    }
}