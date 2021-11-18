#include <iostream>
#include <cmath>
#include "nefroida.h"
#include "lab_2.h"

#define PI 3.14159265
//#define eq "(x^2 + y^2 - ) =  * y^2"

double Nefroida::get_r () {
    return r;
}
    
void Nefroida::set_r (double input_r) {
    r = input_r;
}

double Nefroida::curve_length () {
    return 24 * r;
}

double Nefroida::radius_of_curvature (double t) {
    
    return abs(3 * r * sin(t));
}

double Nefroida::curved_area () {
    return 12 * PI * pow(r, 2);
}

double Nefroida::x_depending_on_t (double t) {
    return 6 * r * cos(t) - 4 * r * cos(3 * t);
}

double Nefroida::y_depending_on_t (double t) {
    return 4 * r * pow(sin(t), 3);
}

char * Nefroida::nefroid () {    
    int count = -1;
    int countMain = -1;
    int eq_count = 1;
    std::string eq = "(x^2 + y^2 - ) =  * y^2";
    char * equation = new char[eq_count]();
    
    for (int i = 0; i < 14; i++){
        eq_count++;
        equation[count++] = eq[countMain++];
    }
    
    char a [27];
    sprintf(a, "%f", 4 * pow(r, 2));
    
    for (int i = 0; i < strlen(a); i++) {
        eq_count++;
        equation[count++] = a[i];
    }
    
    for (int i = 0; i < 4; i++) {
        eq_count++;
        equation[count++] = eq[countMain++];
    }
    
    char b [27];
    sprintf(b, "%f", 108 * pow(r, 4));
    
    for (int i = 0; i < strlen(b); i++) {
        eq_count++;
        equation[count++] = b[i];
    }
    
    for (int i = 0; i < 6; i++) {
        eq_count++;
        equation[count++] = eq[countMain++];
    }
    
    return equation;
}
