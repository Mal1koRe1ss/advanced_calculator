#pragma once

#ifndef UTILS_H
#define UTILS_H

extern double pi;

void menu(int running);
void wait(unsigned int seconds);
void wait_for_enter_key();
void clear_console();
void change_pi(double new_value);

#endif