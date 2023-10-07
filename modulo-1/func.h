#ifndef FUNC
#define FUNC

typedef char* string;

int get_positive_int(string prompt);

float get_positive_float(string prompt);

void draw_chars(char c, int repets);

void draw_pyramid(int height, bool left, bool right);

void left_line(int height, int line);

void right_line(int height, int line);

int calc_coins(int cash);

#endif