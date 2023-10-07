#ifndef FUNC
#define FUNC

typedef char* string;

int get_positive(string prompt);

void draw_chars(char c, int repets);

void draw_pyramid(int size, bool left, bool right);

void left_line(int size, int line);

void right_line(int size, int line);

#endif